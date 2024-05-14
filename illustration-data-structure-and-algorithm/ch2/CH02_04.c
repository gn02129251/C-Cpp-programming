// -*- coding: utf-8 -*-
/*
Created on Tue 14 May 2024

Author:  yiju_wu@brogent.com

File: CH02_04.c

Topic: Write a program to add two matrices and print the result.

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[3][3] = {{1, 3, 5}, {7, 9, 11}, {13, 15, 17}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int sum[3][3] = {0};

    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%6d", a[i][j]);
        }

        if (i == 1)
        {
            printf("%6s", "+");
        }
        else
        {
            printf("%6s", "");
        }

        for (size_t j = 0; j < 3; j++)
        {
            printf("%6d", b[i][j]);
        }

        if (i == 1)
        {
            printf("%6s", "=");
        }
        else
        {
            printf("%6s", "");
        }

        for (size_t j = 0; j < 3; j++)
        {
            printf("%6d", sum[i][j]);
        }

        printf("\n");
    }

    system("pause");
    return 0;
}