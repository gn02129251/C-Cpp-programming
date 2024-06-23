// -*- coding: utf-8 -*-
/*
Created on Sun 23 Jun 2024

Author:  yiju_wu@brogent.com

File: CH02_10.c

Topic: Write a C programe to add two polynominals.

*/
#include <stdio.h>
#include <stdlib.h>

#define ITEMS 6 /* The highest order of polynominals */

void print_poly(int poly[], int items);
void poly_sum(int poly1[ITEMS], int poly2[ITEMS]);

int main(void)
{
    int poly1[ITEMS] = {4, 3, 7, 0, 6, 2}; /* Define the 1st polynominal. */
    int poly2[ITEMS] = {4, 1, 5, 2, 0, 9}; /* Define the 2nd polynomianl. */

    printf("1st polynominal: ");
    print_poly(poly1, ITEMS);
    printf("\n");

    printf("2nd polynominal: ");
    print_poly(poly2, ITEMS);
    printf("\n");

    poly_sum(poly1, poly2);

    system("pause");
    return 0;
}

void print_poly(int poly[], int items)
{
    for (int i = 1; i < items; ++i)
    {
        if (poly[i] == 0) /* If the coefficient equals to 0, skip printing the item. */
        {
            continue;
        }

        printf("%d", poly[i]); /* Print the coefficient. */

        if (i < items - 1)
        {
            if (items - i - 1 == 1) /* If the power equals to 1, then print x only. */
            {
                printf("x");
            }
            else
            {
                printf("x^%d", items - i - 1);
            }

            printf(" + ");
        }
    }
}

void poly_sum(int poly1[ITEMS], int poly2[ITEMS])
{
    int result[ITEMS];

    result[0] = poly1[0];

    for (int i; i < ITEMS; ++i)
    {
        result[i] = poly1[i] + poly2[i];
    }

    printf("Polynominal A + B: ");
    print_poly(result, ITEMS);
    printf("\n");
}