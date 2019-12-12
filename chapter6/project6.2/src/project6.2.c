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

int main(void) {

	int n;
	int m;
	int remain;

	printf("Enter two integers:");
	scanf("%d %d", &n, &m);

	for(;n >= 0;){
		if(n == 0)
			printf("Greatest Common diviser: %d\n", m);

		remain = m % n;
		m = n;
		n = remain;
	}

	return EXIT_SUCCESS;
}
