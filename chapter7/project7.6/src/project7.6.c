/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a;
	printf("sizeof int= %d\n", sizeof(a));
	short b;
	printf("sizeof short= %d\n", sizeof(b));
	long c;
	printf("sizeof long= %d\n", sizeof(c));
	float d;
	printf("sizeof float= %d\n", sizeof(d));
	double e;
	printf("sizeof double= %d\n", sizeof(e));
	long double f;
	printf("sizeof long double= %d\n", sizeof(f));

	return EXIT_SUCCESS;
}
