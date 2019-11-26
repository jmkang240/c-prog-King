/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y, z;
	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &x, &y, &z);
	printf("The reversal is: %d%d%d", z,y,x);
	return EXIT_SUCCESS;
}
