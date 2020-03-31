/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//#include <ctype.h>

int main(void) {
	char c;
	int val=0, a=0;
	printf("Enter a word:");

	while(1)
	{
		c = getchar();
		c = toupper(c);
		if( c == '\n')
			break;
		if( c == 'A' || c == 'E' ||  c == 'I' ||  c == 'L' ||  c == 'N' ||  c == 'O' ||  c == 'R' ||  c == 'S' ||  c == 'T' || c == 'U')
			val = 1;
		if( c == 'D' || c == 'G')
			val = 2;
		if( c == 'B' || c == 'C' || c == 'M' || c == 'P')
			val = 3;
		if( c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y')
			val = 4;
		if( c == 'K')
			val = 5;
		if( c == 'J' || c == 'X')
			val = 8;
		if( c == 'Q' || c == 'Z')
			val = 10;
		a += val;
	}
	printf("Scabble value: %d", a);

	return EXIT_SUCCESS;
}
