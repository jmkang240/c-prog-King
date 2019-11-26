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
	int num,a,b,c,d,e;

	printf("Enter a number between 0 and 32767: ");
	scanf("%5d", &num);

	e = num % 8;
	num /= 8;

	d = num % 8;
	num /= 8;

	c = num % 8;
	num /= 8;

	b = num % 8;
	num /= 8;

	a = num % 8;

	printf("octal number is: %d%d%d%d%d", a,b,c,d,e);

	return EXIT_SUCCESS;
}
