// -*- coding: utf-8 -*-
/*
Created on Sun 12 May 2024

Author:  yiju_wu@brogent.com

File: CH02_03.c

Topic: Use 3-layer for loop to find the minimum value in a 3D array.

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[2][3][3] = {{{33, 45, 67}, {23, 71, 56}, {55, 38, 66}},
                        {{21, 9, 15}, {38, 69, 18}, {90, 101, 89}}}; /* define a 3D array */

    int min = arr[0][0][0]; /* assign the 1st value as the initilized minimum value */

    for (size_t i = 0; i < 2; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
        {
            for (size_t k = 0; k < 3; ++k)
            {
                if (min > arr[i][j][k])
                {
                    min = arr[i][j][k];
                }
            }
        }
    }

    printf("The minimum value: %d\n", min);

    system("pause");
    return 0;
}