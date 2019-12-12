/*
 ============================================================================
 Name        : 9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float loan, rate, month;
	int n;

	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter monthly payment:");
	scanf("%f", &month);
	printf("Enter number of payments: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		loan = (loan - month) + (loan * ((rate / 100) / 12));
		printf("Balance remaining after %d payment: $%.2f\n", i , loan);
	}

	return EXIT_SUCCESS;
}
