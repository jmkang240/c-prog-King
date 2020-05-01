/*
 ============================================================================
 Name        : 12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SCRABBLE_LEN 26

int main(void) {
                                   /* A, B, C, D, E, F, G, H, I, J */
	int scrabble[MAX_SCRABBLE_LEN] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
                                   /* K, L, M, N, O, P,  Q, R, S, T */
                                      5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
                                   /* U, V, W, X, Y, Z */
                                      1, 4, 4, 8, 4, 10 };
	char letter;
	int val=0;

	printf("Enter a word:");
	while((letter=toupper(getchar())) != '\n')
	{
		for(char number = 'A'; number < 'Z' + 1; number++)
		{
			if(letter == number)
			{
				for(int temp=65, i=0; temp<90, i<MAX_SCRABBLE_LEN; temp++, i++)
				{
					if(number == temp)
					{
						val+=scrabble[i];
					}
				}
			}
		}
	}
	printf("Scabble value: %d", val);

	return EXIT_SUCCESS;
}
