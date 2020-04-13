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
#include <stdbool.h>

#define M 31
#define N 24

int main(void) {

/* Exercise 8.5 */
//	int fib_numb[N] = {[0]=0,[1]=1};
//
//	printf("%d\n%d\n", fib_numb[0], fib_numb[1]);
//	for(int i = 2; i < N; i++){
//		fib_numb[i] = fib_numb[i-1] + fib_numb[i-2];
//		printf("%d\n", fib_numb[i]);
//	}

/* Exercise 8.9 */
	int temp[M][N] = {false};
	float sum;

	srand((unsigned) time(NULL));

	printf("Hourly Temperatures in December in Celsius: \n");
	for(int i=1; i<M; i++){
		printf("Day %d: ", i);
		for(int j=0; j<N; j++){
			temp[i][j] = rand() % 9;
			sum += temp[i][j];
			printf("%2d", temp[i][j]);
		}
		printf(" Daily average = %.2f\n", sum/(N*i));
	}
	printf("Average Temperature in Dec: %.2f", sum/(M*N));

	return EXIT_SUCCESS;
}
