/*
 ======================================================================================================================
 Name        : HW2_EX1_C_Program_to_Number_odd_or_even.c
 Author      : Khalid Elsayed
 Created on	 : Aug 13, 2023
 Description : Unit2_C_Programming >> 1_C-Basic >> Assignments >> HW2_EX1_C_Program_to_Number_odd_or_even.(c99)
 ======================================================================================================================
 */
#include <stdio.h>

void main()
{
    int x = 0;
    printf("Enter an integer you want to check: ");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("%d is even. ", x);
    else
        printf("%d is odd. ", x);
}