/*
 ============================================================================
 Name        : 13.c
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
	int space=0;
	float word=0;

	printf("Enter a sentence: ");
	while((c=getchar()) != '\n' )
	{
		if(c != ' ')
			word++;
		else
			space++;
	}
	printf("Average word length: %.1f", word/(space+1));

	return EXIT_SUCCESS;
}
