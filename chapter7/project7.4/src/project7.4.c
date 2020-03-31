/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c;

	printf("Enter an alphabetic phone number:");

	while(1)
	{
		c = getchar();
		if( c == '\n')
			break;
		if( c == '-')
			printf("-");
		if( c == '0')
			printf("0");
		if( c == '1')
			printf("1");
		if( c == 'A' || c == 'B' || c == 'C' || c == '2')
			printf("2");
		if( c == 'D' || c == 'E' || c == 'F' || c == '3')
			printf("3");
		if( c == 'G' || c == 'H' || c == 'I' || c == '4')
			printf("4");
		if( c == 'J' || c == 'K' || c == 'L' || c == '5')
			printf("5");
		if( c == 'M' || c == 'N' || c == 'O' || c == '6')
			printf("6");
		if( c == 'P' || c == 'R' || c == 'S' || c == '7')
			printf("7");
		if( c == 'T' || c == 'U' || c == 'V' || c == '8')
			printf("8");
		if( c == 'W' || c == 'X' || c == 'Y' || c == '9')
			printf("9");
	}

	return EXIT_SUCCESS;
}
