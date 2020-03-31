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
	double n, sum = 0;

	printf("Let us sum a series of double values\n");
	printf("Enter your values (0 to terminate):");

	scanf("%lf", &n);
	while(n != 0 ){
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is %lf\n", sum);

	return EXIT_SUCCESS;
}
