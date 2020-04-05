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
	while((c=getchar()) != '\n' )//|| (c=getchar()) != '.')
	{
		word++;
		if(c == ' ')
			space++;
		printf("word = %.1f\n space=%d\n", word, space);

	}
	printf("Average word length: %.1f", word/(space+2));

	return EXIT_SUCCESS;
}
