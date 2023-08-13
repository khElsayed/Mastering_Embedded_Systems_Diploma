/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      : Khalid Elsayed
 Created on	 : Aug 13, 2023
 Description : Unit2_C_Progtamming >> 1_C-Basic >> Assignments >> EX3 Write C Program to Add Two Integers(c99)
 ======================================================================================================================
 */
#include <stdio.h>

void main()
{
    int x = 0;
    int y = 0;
    printf("Enter two integers: ");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Sum: %d ", x + y);
}