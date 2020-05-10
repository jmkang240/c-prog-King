/*
 ============================================================================
 Name        : 15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 80

int main(void) {

	char msg[MAX_LEN];
	char c;
	int shift, count;

	printf("Enter message to be encrypted: ");
	while((c=getchar()) != '\n')
	{
		msg[count] = c;
		count++;
	}

	printf("Enter shift ammount (1-25): ");
	scanf("%d", &shift);

	/* iterate through the msg */
	for(int i=0; i<MAX_LEN; i++)
	{
		/* search and apply shift to uppercase letters  */
		for(char alphabet='A'; alphabet <= 'Z'; alphabet++)
		{
			if(alphabet == msg[i])
			{
				/* Wrap around algo to shift msg[i] for lowercase letter*/
				msg[i] = ((msg[i] - 'A') + shift) % 26 + 'A';
				break;
			}
		}

		/* search and apply shift to uppercase letters  */
		for(char alphabet='a'; alphabet <= 'z'; alphabet++)
			{
				if(alphabet == msg[i])
				{
					/* wrap around algo to shift msg[i] for lowercase letter*/
					msg[i] = ((msg[i] - 'a') + shift) % 26 + 'a';
					break;
				}
			}
	}

	printf("Encrypted message: ");
	puts(msg);

	return EXIT_SUCCESS;
}
