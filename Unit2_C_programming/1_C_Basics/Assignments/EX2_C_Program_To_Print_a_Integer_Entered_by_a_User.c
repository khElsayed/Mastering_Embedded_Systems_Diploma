/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 Author      : Khalid Elsayed
 Created on	 : Aug 13, 2023
 Description : Unit2_C_Progtamming >> 1_C-Basic >> Assignments >> EX2 Write C Program to Print a Integer Entered by a User(c99)
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
    int x = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("You have entered: %d", x);

    return 0;
}
