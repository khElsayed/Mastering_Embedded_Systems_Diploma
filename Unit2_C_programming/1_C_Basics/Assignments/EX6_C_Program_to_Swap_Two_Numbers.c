/*
 ======================================================================================================================
 Name        : EX6_C_Program_to_Swap_Two_Numbers.c
 Author      : Khalid Elsayed
 Created on	 : Aug 13, 2023
 Description : Unit2_C_Progtamming >> 1_C-Basic >> Assignments >> EX6 Write Source Code to Swap Two Numbers(c99)
 ======================================================================================================================
 */

#include <stdio.h>

void main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    c = a;
    a = b;
    b = c;
    printf("\n");
    printf("After swapping, value of a = %0.2f \n", a);
    printf("After swapping, value of b = %0.1f", b);
}