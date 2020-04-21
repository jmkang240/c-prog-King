/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_RATES_MONTH ((int)(sizeof(month) / sizeof(month[0])))
#define NUM_RATES_VALUE ((int)(sizeof(value) / sizeof(value[0])))
#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))

#define INITIAL_BALANCE 100.00
#define MONTHS 12

int main(void) {

  int i, low_rate, month, num_years, year;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
	printf("%6d%%", low_rate + i);
	value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++) {
	printf("%3d    ", year);
	for (i = 0; i < NUM_RATES; i++) {
	  for (month = 1; month <= 12; month++)
		value[i] += ((double) (low_rate + i) / 12) / 100.0 * value[i];
	  printf("%7.2f", value[i]);
	}
	printf("\n");
  }

  /* Other obscure interest calculation that i thought was correct*/
//  	int i, j, low_rate, num_years, year;
//  	double value[5];
//  	double month[12];
//
//  	printf("Enter interest rate: ");
//  	scanf("%d", &low_rate);
//  	printf("Enter number of years: ");
//  	scanf("%d", &num_years);
//
//  	printf("\nYears");
//  	for(i=0; i < NUM_RATES_VALUE; i++){
//  		for(j=0; j < NUM_RATES_MONTH; j++){
//  			month[j] = INITIAL_BALANCE;
//  		}
//  		printf("%14d%%", low_rate + i);
//  	}
//  	printf("\n");
//
//  	for(year = 1; year <= num_years; year++){
//  		printf("%3d   ", year);
//  		for(i=0; i < NUM_RATES_VALUE; i++){
//  			for(j=0; j < MONTHS; j++){
//  				month[j] += (low_rate + i) / 100.0 * month[j];
//  				if(j == 11)
//  					value[i] = month[j];
//  			}
//  			printf("%15.2f", value[i]);
//  		}
//  		printf("\n");
//  	}

  	return EXIT_SUCCESS;
}
