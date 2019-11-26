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

	int month1, day1, year1, month2, day2, year2, total1, total2;

	printf("Enter first date (mm/dd/yy):");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	printf("Enter second date (mm/dd/yy):");
	scanf("%d/%d/%d", &month2, &day2, &year2);

	total1 = (day1 + (month1 * 31) + (year1 * 365));
	total2 = (day2 + (month2 * 31) + (year2 * 365));

	if (total1 > total2)
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2,
				year2, month1, day1, year1);
	else
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1,
				year1, month2, day2, year2);

	return EXIT_SUCCESS;
}
