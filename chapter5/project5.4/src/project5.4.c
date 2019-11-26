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

	int speed;
	printf("Enter in wind speed:");
	scanf("%d", &speed);
	printf("You've entered: %.2d\n", speed);

	if (speed < 1)
		printf("Calm");
	else if (speed >= 1 && speed <= 3)
		printf("Light Air");
	else if (speed >= 4 && speed <= 27)
		printf("Breeze");
	else if (speed >= 28 && speed <= 47)
		printf("Gale");
	else if (speed >= 48 && speed <= 63)
		printf("Storm");
	else
		printf("Hurricane");

	return EXIT_SUCCESS;
}
