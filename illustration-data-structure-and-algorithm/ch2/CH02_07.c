// -*- coding: utf-8 -*-
/*
Created on Fri 17 May 2024

Author:  yiju_wu@brogent.com

File: CH02_07.c

Topic: Write a program utilizing 3-tuple data structure to compress a sparse matrix for saving
memory.

*/
#include <stdio.h>
#include <stdlib.h>

void print_arr(int*, int, int);

int main(void)
{
    int nonzero = 0;
    int sparse_arr[6][6] = {15, 0, 0, 22, 0, -15, 0,  11, 3, 0, 0, 0, 0, 0, 0,  -6, 0, 0,
                            0,  0, 0, 0,  0, 0,   91, 0,  0, 0, 0, 0, 0, 0, 28, 0,  0, 0};
    int compressed_arr[9][3] = {0};
    int row = 0;

    print_arr(&sparse_arr[0][0], 6, 6);

    compressed_arr[row][0] = 6;
    compressed_arr[row][1] = 6;
    compressed_arr[row++][2] = 8;

    /* Count nonzero elements */
    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            if (sparse_arr[i][j] == 0)
            {
                ;
            }
            else
            {
                nonzero++;
                compressed_arr[row][0] = i;
                compressed_arr[row][1] = j;
                compressed_arr[row++][2] = sparse_arr[i][j];
            }
        }
    }
    printf("Nonzero element count = %d\n", nonzero);
    printf("Compressed matrix:\n");
    print_arr(&compressed_arr[0][0], 9, 3);

    system("pause");
    return 0;
}

void print_arr(int* arrptr, int m, int n)
{
    printf("Matrix:\n");
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%6d", arrptr[i * n + j]);
        }
        printf("\n");
    }
}