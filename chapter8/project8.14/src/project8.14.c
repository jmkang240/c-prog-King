/*
 ============================================================================
 Name        : 14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 75

int main(void) {

	char sentence[MAX_SIZE];
	char c, end;

	printf("Enter a sentence: ");
	for(int i=0; i < MAX_SIZE; i++)
	{
		c = getchar();
		if(c == '?' || c == '.' || c == '!')
		{
			end = c;
			break;
		}
		else
		{
			sentence[i] = c;
		}
	}

	printf("Reversal of sentence: ");
	for(int i=MAX_SIZE; i >= 0; i--)
	{
		if(sentence[i] == ' ')
		{
			for(int j=i+1; j <= MAX_SIZE; j++)
			{
				printf("%c", sentence[j]);
				if(sentence[j] == ' ')
					break;
				else if(j == MAX_SIZE)
				{
					printf(" ");
					break;
				}
			}
		}
		else if(i == 0)
		{
			for(int j=i; j < MAX_SIZE; j++)
				{
					if(sentence[j] == ' ')
						break;
					printf("%c", sentence[j]);
				}
		}
	}
	printf("%c", end);


	return EXIT_SUCCESS;
}
