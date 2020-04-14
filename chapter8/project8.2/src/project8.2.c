/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define A 10
int main(void) {

	int digit_seen[A] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n>0){
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}

	printf("Digits:      ");
	for(int i=0; i < A; i++){
		printf("%2d", i);
	}

	printf("\nOccurences:  ");
	for(int i=0; i < A; i++){
		printf("%2d", digit_seen[i]);
	}

	return EXIT_SUCCESS;
}
