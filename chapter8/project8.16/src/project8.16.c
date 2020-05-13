/*
 ============================================================================
 Name        : 16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 26

int main(void) {

	int count, val=0, arr[MAX_SIZE] = {0};
	char c;

	printf("Enter first word: ");
	/* Loop through the first word for characters */
	while((c=toupper(getchar())) != '\n')
	{
		/* check if any of the characters are letters of the alphabet */
		for(char alphabet = 'A', count=0; alphabet <= 'Z', count < MAX_SIZE; alphabet++, count++)
		{
			/* if a letter matches, increment the count */
			if(c == alphabet)
			{
				arr[count]++;
			}
		}
	}

	printf("Enter second word: ");
	/* Loop through the second word */
	while((c=toupper(getchar())) != '\n')
	{
		/* check if any of the characters are letters of the alphabet */
		for(char alphabet = 'A', count=0; alphabet <= 'Z', count < MAX_SIZE; alphabet++, count++)
		{
			/* if a letter matches, decrement the count */
			if(c == alphabet)
			{
				/* no need to go lower than 0 */
				if(0 == arr[count])
					break;
				else
					arr[count]--;
			}
		}
	}

	/* Loop through the array and add up all the values */
	for(int i=0; i < MAX_SIZE; i++)
	{
		val += arr[i];
	}

	/* If all the elements are 0, they are anagrams */
	if(0 == val)
		printf("The words are anagrams");
	/* If all the elements are not 0, they are not anagrams */
	else
		printf("The words are not anagrams");


	return EXIT_SUCCESS;
}
