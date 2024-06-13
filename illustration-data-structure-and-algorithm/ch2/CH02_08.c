// -*- coding: utf-8 -*-
/*
Created on Thu 13 Jun 2024

Author:  yiju_wu@brogent.com

File: CH02_08.c

Topic: To write a C program to compress upper right triangular matrix to an array.

*/
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5 /* define the dimesion size of matrix */

int A[ARRAY_SIZE][ARRAY_SIZE] = {/* content of the upper right triangular matrix */
                                 {7, 8, 12, 21, 9},
                                 {0, 5, 14, 17, 6},
                                 {0, 0, 7, 23, 24},
                                 {0, 0, 0, 32, 19},
                                 {0, 0, 0, 0, 8}};

int get_value(int, int); /* get value from the array by specified index i, j */
void print_arr(int *, int, int);

int main(void)
{
    int *b = malloc(ARRAY_SIZE * (ARRAY_SIZE + 1) / 2 * sizeof(int)); /* declare an array */

    /* Print the upper right triangular matrix. */
    printf("=========================================\n");
    print_arr(A[0], ARRAY_SIZE, ARRAY_SIZE);
    printf("=========================================\n");

    /* Compress the upper right triangular matrix to an array. */
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        for (int j = 0; j < ARRAY_SIZE; j++)
        {
            if (A[i][j] != 0)
            {
                *(b + count++) = A[i][j];
            }
        }
    }

    /* Print the array. */
    printf("Array: ");
    for (int i = 0; i < ARRAY_SIZE * (ARRAY_SIZE + 1) / 2; ++i)
    {
        printf("%d ", *(b + i));
    }
    printf("\n");

    system("pause");
    return 0;
}

void print_arr(int *arrptr, int m, int n)
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