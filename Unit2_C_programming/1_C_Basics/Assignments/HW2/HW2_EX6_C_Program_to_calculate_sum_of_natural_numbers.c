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
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);
    for (int i = 0; i <= x; i++)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
}