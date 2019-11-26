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

	int mm, dd, yyyy;

	printf("Enter a date (mm/dd/yyyy):");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);

	printf("You enter date %.4d%.2d%.2d", yyyy, mm, dd);


	return EXIT_SUCCESS;
}
