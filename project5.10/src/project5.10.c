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

	int grade;

	printf("Enter numerical grade:");
	scanf("%d", &grade);

	if(grade > 100 || grade < 0){
		printf("Error!\n");
		return 0;
	}

	grade /= 10;

	switch(grade){
		case 10: case 9: printf("Letter grade: A");
				break;
		case 8: printf("Letter grade: B");
				break;
		case 7: printf("Letter grade: C");
				break;
		case 6: printf("Letter grade: D");
				break;
		default: printf("Letter grade: F");
				break;
		}

	return EXIT_SUCCESS;
}
