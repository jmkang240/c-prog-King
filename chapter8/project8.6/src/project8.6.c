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

#define MSG_LEN (sizeof(msg)/sizeof(msg[0]))
#define TEXT 100

int main(void) {

	char c, msg[TEXT];
	int i;

	printf("Enter message: ");
		for(i=0; i < MSG_LEN; i++ ){
			scanf("%c", &c);
			if(c == '\n')
				break;
			msg[i] = c;
			switch(toupper(c)){
				case 'A':
					msg[i] = '4'; break;
				case 'B':
					msg[i] = '8'; break;
				case 'E':
					msg[i] = '3'; break;
				case 'I':
					msg[i] = '1'; break;
				case 'O':
					msg[i] = '0'; break;
				case 'S':
					msg[i] = '5'; break;
			}
			printf("%c", toupper(msg[i]));
		}
	printf("!!!!!!!!!!");
	return EXIT_SUCCESS;
}
