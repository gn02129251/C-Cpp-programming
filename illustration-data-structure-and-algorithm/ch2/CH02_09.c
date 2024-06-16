// -*- coding: utf-8 -*-
/*
Created on Sun 16 Jun 2024

Author:  yiju_wu@brogent.com

File: CH02_09.c

Topic: Write a C program to compress bottom left triangular matrix to an array.

*/
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5 /* define the dimension size of a matrix */

int A[ARRAY_SIZE][ARRAY_SIZE] = {/* content of bottom left triangular matrix */
                                 {76, 0, 0, 0, 0},
                                 {54, 51, 0, 0, 0},
                                 {23, 8, 26, 0, 0},
                                 {43, 35, 28, 18, 0},
                                 {12, 9, 14, 35, 46}};

void print_matrix(int *, int, int);
int get_value(int *, int, int); /* get a value from a matrix by specified indices */

int main(void)
{
    /* Define a memory size for storing the compressed array. */
    int *b = malloc((1 + ARRAY_SIZE) * ARRAY_SIZE / 2 * sizeof(int));

    /* Print the matrix. */
    printf("======================================================\n");
    print_matrix(&A[0][0], ARRAY_SIZE, ARRAY_SIZE);
    printf("======================================================\n");

    /* Compress the matrix. */
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        for (int j = 0; j < ARRAY_SIZE; ++j)
        {
            if (A[i][j] != 0)
            {
                *(b + i * ARRAY_SIZE + j - ((ARRAY_SIZE * 2 - i - 1) * i / 2)) = A[i][j];
            }
        }
    }

    /* Print the compressed array. */
    printf("Compressed array: ");
    for (int i = 0; i < (1 + ARRAY_SIZE * ARRAY_SIZE / 2); ++i)
    {
        printf("%d ", *(b + i));
    }
    printf("\n");

    system("pause");
    return 0;
}

void print_matrix(int *ptr, int m, int n)
{
    printf("MATRIX:\n");

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("\t%d", *(ptr + i * n + j));
        }
        printf("\n");
    }
}

int get_value(int *ptr, int i, int j)
{
    return *(ptr + i * ARRAY_SIZE + j - -((ARRAY_SIZE * 2 - i - 1) * i / 2));
}