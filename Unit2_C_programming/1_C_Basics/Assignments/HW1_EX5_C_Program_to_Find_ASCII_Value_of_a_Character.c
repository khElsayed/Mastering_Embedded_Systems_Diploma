/*
 ======================================================================================================================
 Name        : EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 Author      : Khalid Elsayed
 Created on	 : Aug 13, 2023
 Description : Unit2_C_Programming >> 1_C-Basic >> Assignments >> EX5 Write C Program to Find ASCII Value of a Character(c99)
 ======================================================================================================================
 */
#include <stdio.h>

void main()
{
    char x = '0';
    printf("Enter a character: ");
    scanf("%c", &x);
    printf("ASCII value of %c = %d", x, x);
}