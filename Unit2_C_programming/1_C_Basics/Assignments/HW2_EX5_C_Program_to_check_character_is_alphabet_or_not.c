/*
 ======================================================================================================================
 Name         HW2_EX5_C_Program_to_check_character_is_alphabet_or_not.c
 Author       Khalid Elsayed
 Created on	  Aug 13, 2023
 Description  Unit2_C_Programming >> 1_C-Basic >> Assignments >>  HW2_EX5_C_Program_to_check_character_is_alphabet_or_not.(c99)
 =====
*/

#include <stdio.h>

void main()
{
    char x = '0';
    printf("Enter a character: ");
    scanf("%c", &x);
    if ((65 <= x && 90 >= x) || (97 <= x && 122 >= x))
        printf("%c is an alphabet", x);
    else
        printf("%c is not an alphabet", x);
}