/*
 ============================================================================
 Name        : 10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int vowels=0;
	char c;
	printf("Enter a sentence: ");

	while(1)
	{
		c = getchar();
		c = toupper(c);
		if( c == '\n')
			break;
		if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			vowels++;
	}
	printf("Your sentence contains %d vowels ", vowels);
	return EXIT_SUCCESS;
}
