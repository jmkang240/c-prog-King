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

	float fact = 1.00f;
	float currentExp = 1.00f;
	float userExp, prevFact, prevExp;

	printf("Enter an upper limit for e (small floating number): ");
	scanf("%f", &userExp);

	int i = 1;
	do{
		prevFact = fact;
		fact *= i;
		prevExp = currentExp;
		currentExp += (1/fact);
		if(currentExp > prevExp){
			printf("Your mathematical constant e is %.6f and has %d factorial terms\n", prevExp, i - 1);
		}
		i++;

	}while(currentExp <= userExp);

	return EXIT_SUCCESS;
}
