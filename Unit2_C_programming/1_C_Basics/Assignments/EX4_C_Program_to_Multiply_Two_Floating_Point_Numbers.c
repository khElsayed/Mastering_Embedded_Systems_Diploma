/*
 ======================================================================================================================
 Name        : EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 Author      : Khalid Elsayed
 Created on	 : Aug 13, 2023
 Description : Unit2_C_Progtamming >> 1_C-Basic >> Assignments >> EX4 Write C Program to Multiply two Floating Point Numbers(c99)
 ======================================================================================================================
 */
#include <stdio.h>

void main()
{
    float x = 0;
    float y = 0;
    printf("Enter two numbers: ");
    scanf("%f", &x);
    scanf("%f", &y);
    printf("Product: %f ", x * y);
}