/*
 ============================================================================
 Name        : 11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c, first, next, then, last;

	printf("Enter in a first and last name: ");

	for(;;)
	{
		c = getchar();
		if(c != ' ')
		{
			first = c;
			break;
		}
	}

	while(first)
	{
		next = getchar();
		if(next == ' ')
			break;
	}

	while(next)
	{
		then = getchar();
		if(then != ' ')
		{
			putchar(then);
			break;
		}
	}

	while(then)
	{
		last = getchar();
		if(last == '\n' || last == ' ')
			break;
		putchar(last);
	}

	printf(", %c.", first);

	return EXIT_SUCCESS;
}
