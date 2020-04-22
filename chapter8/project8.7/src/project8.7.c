/*
 ============================================================================
 Name        : 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ROW 5
#define COL 5

int main(void) {

	int arr[ROW][COL], i, j, n;

	for(i=0; i<ROW; i++){
		printf("Enter row %d:", i+1);
		for(j=0; j<COL; j++){
			scanf("%d", &n);
			arr[i][j] = n;
		}
	}

	printf("Row totals:");
	for(i=0; i<ROW; i++){
		int sumRow = 0;
		for(j=0; j<COL; j++){
			sumRow += arr[i][j];
		}
		printf(" %d", sumRow);
	}

	printf("\nColumn totals:");
	for(i=0; i<ROW; i++){
		int sumCol = 0;
		for(j=0; j<COL; j++){
			sumCol += arr[j][i];
		}
		printf(" %d", sumCol);
	}

	return EXIT_SUCCESS;
}
