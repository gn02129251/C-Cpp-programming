// -*- coding: utf-8 -*-
/*
Created on Thu 27 Jun 2024

Author:  yiju_wu@brogent.com

File: CH03_01.c

Topic: Design a C program. Dynamically arrange a memory space with single float size. Enter the
float value. Then print the address and the value. Finally, use free() to release the memory space.

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Declare a pointer pointing to an address for storing a float number. */
    float *ptr_float = (float *) malloc(sizeof(float));

    /* Get a float number from input. */
    printf("Enter a number: ");
    scanf("%f", ptr_float);

    /* Print the value and the memory address of the float number. */
    printf("The value of entered number: %f\n", *ptr_float);
    printf("The memory address of the entered number: %p\n", ptr_float);

    /* Release the memory space of the float number. */
    free(ptr_float);

    system("pause");
    return 0;
}