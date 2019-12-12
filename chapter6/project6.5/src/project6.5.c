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

int main(void) {

	int n, m;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("The reversal is: ");
	do{
		m = n % 10;
		n /= 10;
		printf("%d", m);
	}while(n > 0);


	return EXIT_SUCCESS;
}
