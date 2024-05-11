// -*- coding: utf-8 -*-
/*
Created on Sat 11 May 2024

Author:  yiju_wu@brogent.com

File: CH02_02.c

Topic:Use a 2-dimension array to solve 2dn order determinant.

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[2][2]; /* declare a 2D array to store values */
    int ans;       /* delcare a var to store 2nd order determinant */

    printf("|a1 b1|\n");
    printf("|a2 b2|\n");

    printf("Please enter a1: ");
    scanf("%d", &arr[0][0]);

    printf("Please enter b1: ");
    scanf("%d", &arr[0][1]);

    printf("Please enter a2: ");
    scanf("%d", &arr[1][0]);

    printf("Please enter b2: ");
    scanf("%d", &arr[1][1]);

    printf("|%d %d|\n", arr[0][0], arr[0][1]);
    printf("|%d %d|\n", arr[1][0], arr[1][1]);

    ans = arr[0][0] * arr[1][1] - arr[1][0] * arr[0][1];
    printf("Determinant = %d\n", ans);

    system("pause");
    return 0;
}