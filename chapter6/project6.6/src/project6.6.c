/*
 ============================================================================
 Name        : 6.c
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
	int i;

	printf("Enter a number:");
	scanf("%d", &n);

	for(i=2; i*i < n; i += 2){
		printf("%d\n", i*i);
	}

	return EXIT_SUCCESS;
}
