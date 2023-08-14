/*
 ======================================================================================================================
 Name         HW2_EX4_C_Program_to_check_number_positive_or_negative.c
 Author       Khalid Elsayed
 Created on	  Aug 13, 2023
 Description  Unit2_C_Programming >> 1_C-Basic >> Assignments >>  HW2_EX4_C_Program_to_check_number_positive_or_negative.(c99)
 =====
*/

#include <stdio.h>

void main()
{
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    if (0 <= x)
        printf("%0.2f is positive", x);
    else
        printf("%0.2f is negative", x);
}