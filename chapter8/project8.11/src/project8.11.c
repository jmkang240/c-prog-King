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
#include <ctype.h>

#define MAX_PHONE_LEN   15

int main(void) {

	char phone[MAX_PHONE_LEN];
	char c;

	printf("Enter an alphabetic phone number: ");
	for(int i=0; i < MAX_PHONE_LEN; i++)
	{
		if((c=getchar()) != '\n')
			phone[i] = toupper(c);
	}

	printf("In numeric form: ");
	for(int i=0; i<MAX_PHONE_LEN; i++)
	{
		if(phone[i] == 'A' || phone[i] == 'B' || phone[i] == 'C')
			phone[i] = '2';
		else if(phone[i] == 'D' || phone[i] == 'E' || phone[i] == 'F')
			phone[i] = '3';
		else if(phone[i] == 'G' || phone[i] == 'H' || phone[i] == 'I')
			phone[i] = '4';
		else if(phone[i] == 'J' || phone[i] == 'K' || phone[i] == 'L')
			phone[i] = '5';
		else if(phone[i] == 'M' || phone[i] == 'N' || phone[i] == 'O')
			phone[i] = '6';
		else if(phone[i] == 'P' || phone[i] == 'R' || phone[i] == 'S')
			phone[i] = '7';
		else if(phone[i] == 'T' || phone[i] == 'U' || phone[i] == 'V')
			phone[i] = '8';
		else if(phone[i] == 'W' || phone[i] == 'X' || phone[i] == 'Y')
			phone[i] = '9';
		printf("%c", phone[i]);
	}
	return EXIT_SUCCESS;
}
