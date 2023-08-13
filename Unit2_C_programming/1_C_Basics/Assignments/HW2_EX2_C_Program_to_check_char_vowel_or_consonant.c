/*
 ======================================================================================================================
 Name        : HW2_EX2_C_Program_to_check_char_vowel_or_consonant.c
 Author      : Khalid Elsayed
 Created on	 : Aug 13, 2023
 Description : Unit2_C_Programming >> 1_C-Basic >> Assignments >> HW2_EX2_C_Program_to_check_char_vowel_or_consonant.(c99)
 =====
*/

#include <stdio.h>

void main()
{
    char x = '0';
    printf("Enter an alphabet: ");
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        printf(" %c is a vowel \n", x);
    else if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        printf(" %c is a vowel \n", x);
    else
        printf(" %c is a consonant \n", x);
}