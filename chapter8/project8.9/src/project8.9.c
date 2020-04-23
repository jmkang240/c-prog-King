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
#include <stdbool.h>

#define ROW 10
#define COL 10
#define NAV 4
#define MAX_FLAG 4
#define offset 1

int main(void) {

	char arr[ROW][COL]= {0};
	int num, setflag, m=0, n=0;

	srand((unsigned)time(NULL));

	for(int i=0; i<ROW; i++){
		for(int j=0; j<COL; j++){
			arr[i][j] = '.';
		}
	}
	arr[m][n] = 'A';
	for(char alphabet = 'B'; alphabet < 'Z'+offset; alphabet++){
		num = rand() % NAV;
		setflag = 0;
		switch(num){
			east:
			case 0: /* East Direction */
				if((n+offset <= 9) && (arr[m][n+offset] == '.')){
					arr[m][n+offset] = alphabet;
					n++;
					break;
				}
				else if(setflag > MAX_FLAG)
					goto terminate;
				else
					setflag++;

			case 1: /* South Direction */
				if((m+offset <= 9) && (arr[m+offset][n] == '.')){
					arr[m+offset][n] = alphabet;
					m++;
					break;
				}
				else if(setflag > MAX_FLAG)
					goto terminate;
				else
					setflag++;

			case 2: /* West Direction */
				if((n-offset >= 0) && (arr[m][n-offset] == '.')){
					arr[m][n-offset] = alphabet;
					n--;
					break;
				}
				else if(setflag > MAX_FLAG)
					goto terminate;
				else
					setflag++;

			case 3: /* North Direction */
				if((m-offset >= 0) && (arr[m-offset][n] == '.')){
					arr[m-offset][n] = alphabet;
					m--;
					break;
				}
				else if(setflag > MAX_FLAG)
					goto terminate;
				else{
					setflag++;
					goto east;
				}
			}
	}
	terminate:
	for(int i=0; i<ROW; i++){
			for(int j=0; j<COL; j++){
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}
