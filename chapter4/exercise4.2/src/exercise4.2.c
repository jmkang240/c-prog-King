/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 7;
	int j = 3 + --i * 2;

	printf("%d %d", i, j);

	return EXIT_SUCCESS;
}
