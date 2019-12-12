/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, start;

	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week(1=Sun, 7=Sat): ");
	scanf("%d", &start);

	for(int j = 1; j < start; j++){
		printf("\t");
	}

	for(int i=1; i <= n ; i++){
		printf("%d\t", i);
		if((i + start - 1) % 7 == 0){
			printf("\n");
		}
	}

	return EXIT_SUCCESS;
}
