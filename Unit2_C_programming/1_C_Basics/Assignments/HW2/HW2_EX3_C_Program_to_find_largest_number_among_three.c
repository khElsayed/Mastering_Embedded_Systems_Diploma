/*
 ======================================================================================================================
 Name         HW2_EX3_C_Program_to_find_largest_number_among_three.c
 Author       Khalid Elsayed
 Created on	  Aug 13, 2023
 Description  Unit2_C_Programming >> 1_C-Basic >> Assignments >>  HW2_EX3_C_Program_to_find_largest_number_among_three.(c99)
 =====
*/

#include <stdio.h>

void main()
{
    float x, y, z;
    printf("Enter three numbers: ");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    float max = x;
    if (max < y)
        max = y;
    else if (max < z)
        max = z;
    printf("Largest number: %0.2f", max);
}