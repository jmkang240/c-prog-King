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

	float number;
	float largest = 0.0f;

	while(1){
		printf("Enter a number: ");
		scanf("%f", &number);

		if(number > largest){
			largest = number;
		}

		if(number <= 0.0f){
			printf("The largest number entered was %.4f\n", largest);
			break;
		}
	}
	return EXIT_SUCCESS;
}
