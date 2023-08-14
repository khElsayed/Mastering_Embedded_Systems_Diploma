/*
 ============================================================================
 Name        : Number_Triangle_Generator.c
 Author      : khalid elsayed
 Version     : 1
 Copyright   : None
 Description : list numbers from 0 to 9 in multiple lines with shifting left on each new line in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int j=0;
	for(int i=1; i<11; i++)
	{
		for(; j<10; j++)
		{
			printf("%d\t", j);
		}
		j=i;
		printf("\n");
	}
	return 0;
}