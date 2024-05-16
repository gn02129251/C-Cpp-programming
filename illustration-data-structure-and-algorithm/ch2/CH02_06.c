// -*- coding: utf-8 -*-
/*
Created on Thu 16 May 2024

Author:  yiju_wu@brogent.com

File: CH02_06.c

Topic: Write a program to transpose a 4 x 4 matrix.

*/
#include <stdio.h>
#include <stdlib.h>

void print_array(int*, int, int);
void get_matrix(int**, int*, int*);
void transpose_matrix(int**, int*, int*);

int main(void)
{
    int m, n;
    int* arrptr;

    get_matrix(&arrptr, &m, &n);
    print_array(arrptr, m, n);

    transpose_matrix(&arrptr, &m, &n);
    print_array(arrptr, n, m);

    free(arrptr);
    system("pause");
    return 0;
}

void print_array(int* arrptr, int m, int n)
{
    printf("Matrix:\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%6d", *(arrptr + (i * n + j)));
        }
        printf("\n");
    }
}

void get_matrix(int** arrptr, int* mptr, int* nptr)
{
    printf("Please enter size (m, n) of matrix.\n");
    printf("m = ");
    scanf("%d", mptr);
    printf("n = ");
    scanf("%d", nptr);

    *arrptr = (int*) malloc(*mptr * *nptr * sizeof(int));

    printf("Please enter elements.\n");
    for (size_t i = 0; i < *mptr; i++)
    {
        for (size_t j = 0; j < *nptr; j++)
        {
            printf("Matrix[%d][%d] = ", i, j);
            scanf("%d", &(*arrptr)[i * *nptr + j]);
        }
    }
}

void transpose_matrix(int** arrptr, int* mptr, int* nptr)
{
    int* transposed_arr;

    transposed_arr = (int*) malloc(*mptr * *nptr * sizeof(int));
    for (size_t i = 0; i < *nptr; i++)
    {
        for (size_t j = 0; j < *mptr; j++)
        {
            transposed_arr[i * *mptr + j] = (*arrptr)[j * *nptr + i];
        }
    }

    *arrptr = transposed_arr;
}