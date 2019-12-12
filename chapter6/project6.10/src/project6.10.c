/*
 ============================================================================
 Name        : 10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int month, day, year;
	int eMonth = 99, eDay = 99, eYear = 99;

	while(1){
		printf("Enter a date (mm/dd/yy):");
		scanf("%d/%d/%d", &month, &day, &year);
		if(month + day + year == 0){
			printf("%d/%d/%d is the earliest date", eMonth, eDay, eYear);
			break;
		}

		if(year < eYear){
			eYear = year;
			eMonth = month;
			eDay = day;
		}

		if(year <= eYear)
			if(month < eMonth){
				eYear = year;
				eMonth = month;
				eDay = day;
			}

		if(year <= eYear)
			if(month <= eMonth)
				if(day < eDay){
					eYear = year;
					eMonth = month;
					eDay = day;
				}

	}
	return EXIT_SUCCESS;
}
