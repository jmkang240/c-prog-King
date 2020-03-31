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

int main(void) {

	int n;
	long i;

	printf("blank \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		printf("%10ld\t%10ld \n", i, i*i);

	//the smallest number of int i that causes failure is 46341
	//     46340	2147395600
    //	   46341	-2147479015

	//the smallest number of short i that cause failure
	//       181	     32761
	//	     182	    -32412

	//the smallest number of long i that causes failure is too high, it was taking too long.
	// 212742565	45259398962779225
	// 212742566	45259399388264356

	return 0;
}
