/*
 ============================================================================
 Name        : 14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	double x, y=1, div, avg;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	for(;;)
	{
		div = x/y;
		avg = (div + y)/2;
		if((fabs(y-avg)) < (0.00001*y))
			break;
		else
			y=avg;
	}
	printf("Square root: %.5lf", y);

	return EXIT_SUCCESS;
}
