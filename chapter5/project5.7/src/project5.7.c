/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n1, n2, n3, n4, max, min;

	printf("Enter 4 integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if (n1 >= n2) {
		max = n1;
		min = n2;
	} else {
		max = n2;
		min = n1;
	}

	if (n3 > max) {
		max = n3;
	} else {
		min = n3;
	}

	if (n4 > max) {
		max = n4;
	} else {
		min = n4;
	}

	printf("Max number = %d\n", max);
	printf("Min number = %d", min);
	/*
	 * incorrect attempt
	 *
	 int n1, n2, n3, n4, max, min;

	 printf("Enter 4 integers: ");
	 scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	 if (n1 > n2){
	 if(n1 > n3){
	 if (n1 > n4){
	 max = n1;
	 min = n4;
	 }
	 else{
	 max = n4;
	 min = n1;
	 }
	 }
	 else{
	 max = n3;
	 min = n1;
	 }
	 }
	 else{
	 if(n2 > n3){
	 if(n2 > n4){
	 max = n2;
	 min = n4;
	 }
	 else{
	 max = n4;
	 min = n2;
	 }
	 }
	 else{
	 if(n3 > n4){
	 max = n3;
	 min = n4;
	 }
	 else{
	 max = n4;
	 min = n3;
	 }
	 }
	 }

	 printf("Max number = %d\n", max);
	 printf("Min number = %d", min);

	 */
	return EXIT_SUCCESS;
}
