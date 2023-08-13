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
    float x, y;
    char z;
    while (1)
    {
        printf("Enter operation either + or - or * or / : ");
        scanf("%c", &z);
        if (z == '+' || z == '-' || z == '*' || z == '/')
            break;
    }
    printf("Enter two operands : ");
    scanf("%f", &x);
    scanf("%f", &y);
    switch (z)
    {
    case '+':
        printf("%0.2f + %0.2f = %0.1f", x, y, x + y);
        break;
    case '-':
        printf("%0.2f - %0.2f = %0.1f", x, y, x - y);
        break;
    case '*':
        printf("%0.2f * %0.2f = %0.1f", x, y, x * y);
        break;
    case '/':
        printf("%0.2f / %0.2f = %0.1f", x, y, x / y);
        break;
    }
}