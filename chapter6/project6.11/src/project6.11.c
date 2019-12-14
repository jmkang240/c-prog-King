/*
 ============================================================================
 Name        : 11.c
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
	float fact = 1.00f;
	float e = 1.00f;

	printf("Enter in number of terms to calculate e: ");
	scanf("%d", &n);

	for(int i=1; i <= n; i++){
	fact *= i;
	e += (1/fact);
	}

	printf("The value of the mathematical constant e for %d terms is: %.4f\n", n, e);

	return EXIT_SUCCESS;
}
