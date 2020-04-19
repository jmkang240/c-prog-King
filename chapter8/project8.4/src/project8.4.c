/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define len (int)(sizeof(a)/sizeof(a[0]))

int main(void) {
	int a[10], i;

	printf("Enter %d numbers: ", len);
	for(i=0; i< len; i++)
		scanf("%d", &a[i]);

	printf("In reverse order: ");
	for(int i = len - 1; i >= 0; i--)
		printf(" %d", a[i]);

	return EXIT_SUCCESS;
}
