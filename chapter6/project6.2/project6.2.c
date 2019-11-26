/*
 * project6.2.c
 *
 *  Created on: Nov 26, 2019
 *      Author: johnkang
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	float firstNum, secondNum, thirdNum;

	printf("Enter a three digit number: ");
	scanf("%d", &n);
	firstNum = n % 10;
	secondNum = (n / 10) % 10;
	thirdNum = (n / 10 ) / 10;
	printf("The reversal is: %1.f%1.f%1.f", firstNum, secondNum, thirdNum);

	return EXIT_SUCCESS;
}
