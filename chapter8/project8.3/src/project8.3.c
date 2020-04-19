/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define A 10

int main(void) {

	int digit_seen[A] = {0};
	bool repeat = false;
	int digit;
	long n, num;

	do{
		printf("Enter a number (0 to terminate): ");
		scanf("%ld", &n);
		num=n;
		while(num>0){
			digit = num % 10;
			digit_seen[digit]++;
			num /= 10;
		}
	}while(n>0);

	for(int i = 0; i < A; i++){
		if(digit_seen[i] >= 2)
			repeat = true;
	}
	if(repeat)
		printf("Repeated digit\n");
	else
		printf("No repeated digit was found\n");

	return EXIT_SUCCESS;
}
