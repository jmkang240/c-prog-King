/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	printf("Enter in number:");
	scanf("%d", &n);

	if (n < 9)
		printf("The number %d has 1 digit\n", n);
	else if (n <= 99)
		printf("The number %d has 2 digit\n", n);
	else if (n <= 999)
		printf("The number %d has 3 digit\n", n);
	else
		printf("The number %d has digits beyond the scope of the project\n", n);

	return EXIT_SUCCESS;
}
