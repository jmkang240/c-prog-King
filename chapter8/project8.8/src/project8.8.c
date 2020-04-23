/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#define ROW 5
#define COL 5

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[ROW][COL], n, totAvg, quizAvg, hi, low;

	for(int i=0; i<ROW; i++){
		printf("Enter student %d's %d Quiz Grades: ", i+1, ROW);
		for(int j=0; j<COL; j++){
			scanf("%d", &n);
			arr[i][j] = n;
		}
	}

	for(int i=0; i<ROW; i++){
		int tot = 0;
		for(int j=0; j<COL; j++){
			tot += arr[i][j];
			totAvg = tot / COL;
		}
		printf("\nStudent %d - Total Score: %d Average Score: %d", i+1, tot, totAvg);
	}

	for(int i=0; i<ROW; i++){
		int tot = 0;
		hi = arr[0][i];
		low = arr[0][i];
		for(int j=0; j<COL; j++){
			tot += arr[j][i];
			quizAvg = tot / COL;
			if(arr[j][i] > hi)
				hi = arr[j][i];
			if(arr[j][i] < low)
				low = arr[j][i];
		}
		printf("\nQuiz %d - Average Score: %d High score: %d Low score: %d", i+1, quizAvg, hi, low);
	}

	return EXIT_SUCCESS;
}
