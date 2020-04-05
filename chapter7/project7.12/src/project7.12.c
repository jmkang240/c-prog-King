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
	float value, num1, num2;
	char c;

	printf("Enter an expression: ");
	scanf("%f", &num1);
	value = num1;

	while((c=getchar()) != '\n')
	{
		scanf("%f", &num2);
		switch(c)
			{
				case '/': value = value / num2;
					break;

				case '-': value = value - num2;
				break;

				case '*': value = value * num2;
					break;

				case '+': value = value + num2;
					break;
			}

		//printf("\tnum1:%f\nnum2:%f\nc:%c\nvalue:%f\n\n ", num1, num2, c, value);

	}
	printf("Value of expression: %.2f", value);

	return EXIT_SUCCESS;
}
