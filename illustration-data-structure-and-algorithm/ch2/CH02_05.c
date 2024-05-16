// -*- coding: utf-8 -*-
/*
Created on Wed 15 May 2024

Author:  yiju_wu@brogent.com

File: CH02_05.c

Topic: Write a program to get 2 customized matrices, and calculate the product of the two matrices.

*/
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr_ptr, int m, int n);
void matrix_multiply(int *a, int *b, int m, int n, int p);

int main(void)
{
    int *a, *b, *c;
    int m, n, p;
    int i, j;

    printf("Please enter size (m, n) of A matrix.\n");
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    a = (int *) malloc(m * n * sizeof(int)); /* declare memory size of A matrix */
    printf("Please enter elements of the A matrix.\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i * n + j]);
        }
    }
    print_array(a, m, n); /* printf matrix */

    printf("Please enter size (n, p) of B matrix.\n");
    printf("n = %d\n", n);
    printf("p = ");
    scanf("%d", &p);
    b = (int *) malloc(n * p * sizeof(int));
    printf("Please enter elements of the B matrix.\n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < p; ++j)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i * p + j]);
        }
    }
    print_array(b, n, p);

    matrix_multiply(a, b, m, n, p);

    system("pause");
    return 0;
}

void print_array(int *arrptr, int m, int n)
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

void matrix_multiply(int *a, int *b, int m, int n, int p)
{
    int temp;
    int *product;

    product = (int *) malloc(m * p * sizeof(int));

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < p; j++)
        {
            product[i * p + j] = 0; /* initialize element */
            for (size_t k = 0; k < n; k++)
            {
                product[i * p + j] += a[i * n + k] * b[k * p + j];
            }
        }
    }
    print_array(product, m, p);
}