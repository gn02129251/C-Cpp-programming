// -*- coding: utf-8 -*-
/*
Created on Sat 11 May 2024

Author:  yiju_wu@brogent.com

File: CH02_01.c

Topic: Use one dimension array to store score of 5 students. And use for loop to print each
student's score and compute the sum of scores.

*/
#include <stdio.h>
#include <stdlib.h> /* for system("pause") */

int main(void)
{
    /* Create an array to store score of 5 students */
    int scores[5] = {87, 66, 90, 65, 70};

    int total_score = 0; /* define a var to store the sume of scores */

    printf("%13s%13s\n", "Student", "Score");

    /* Use for loop to print student's score and compute the sum of scores */
    for (size_t i = 0; i < 5; ++i)
    {
        printf("%13d%13d\n", i + 1, scores[i]);
        total_score += scores[i];
    }

    printf("Total score of 5 students: %d\n", total_score);

    system("pause");
    return 0;
}