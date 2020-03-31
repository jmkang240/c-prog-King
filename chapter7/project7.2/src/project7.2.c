/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, n;
	char ch;

	printf("project 7.2 \n");
	scanf("%d", &n);
	ch = getchar();

	for(i=1; i<=n; i++){
		printf("%10d\t%10d \n", i, i*i);
			if( i % 24 == 0)
			{
				printf("Press Enter to continue");
				if(getchar() == '\n')
					continue;
			}
	}
	return EXIT_SUCCESS;
}
