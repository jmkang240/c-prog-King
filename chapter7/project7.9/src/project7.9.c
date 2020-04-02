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

	int hour, min, hour1, min2;
	char c1, c2;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c%c", &hour, &min, &c1, &c2);
	c1 = toupper(c1);
	c2 = toupper(c2);

	if(c1 == 'A')
		printf("Equivalent 24-hour time %d:%.2d", hour, min);

	if(c1 == 'P')
		if(hour == 12)
			printf("Equivalent 24-hour time %d:%.2d", hour, min);
		else
			printf("Equivalent 24-hour time %d:%.2d", hour+12, min);


	return EXIT_SUCCESS;
}
