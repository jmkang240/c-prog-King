/*
 ============================================================================
 Name        : 12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float value, num1;
	char c;

	printf("Enter an expression: ");
	while(1)
	{
		scanf("%f", &num1);
		scanf("%c", &c);

		if(c == '*' || c == '/' || c == '-' || c == '+')
	}

	printf("Value of expression: %f", value);

	return EXIT_SUCCESS;
}
