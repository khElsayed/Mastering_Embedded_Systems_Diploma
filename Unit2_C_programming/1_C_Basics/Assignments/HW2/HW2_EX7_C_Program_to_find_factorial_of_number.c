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
    int x;
    int total = 1;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x < 0)
        printf("Error!!! Factorial of negative number doesn't exist");
    else
    {
        for (int i = 1; i <= x; i++)
        {
            total *= i;
        }
        printf("Factorial = %d", total);
    }
}