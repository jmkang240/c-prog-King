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

#define MAX_NAME_LEN 20

int main(void) {

	char c, n, first, last[MAX_NAME_LEN];

	printf("Enter in a first and last name: ");
	first = getchar();
	while((c=getchar()) != ' '){
	}
	printf("You've entered the name: ");
	for(int i=0; i < MAX_NAME_LEN; i++)
	{
		if((c=getchar()) != '\n')
			last[i] = c;
		else
			break;
		printf("%c", last[i]);
	}
	printf(", %c", first);

	return EXIT_SUCCESS;
}
