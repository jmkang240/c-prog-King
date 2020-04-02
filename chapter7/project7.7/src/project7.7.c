/*
 ============================================================================
 Name        : 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;
	char c;

	printf("Enter a fraction equation: ");

	scanf("%d/%d ", &num1, &denom1);
	c = getchar();
	scanf(" %d/%d", &num2, &denom2);

	if(c == '+')
	{
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d\n", result_num, result_denom);
	}
	if(c == '-')
	{
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d\n", result_num, result_denom);
	}
	if(c == '*')
	{
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d\n", result_num, result_denom);
	}
	if(c == '/')
	{
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
		printf("The sum is %d/%d\n", result_num, result_denom);
	}
	return EXIT_SUCCESS;
}
