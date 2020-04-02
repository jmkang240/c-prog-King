/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int hour, min, timeMin;
	char c1, c2;

	printf("Enter a 12-hour time ");
	scanf("%d:%d %c%c", &hour, &min, &c1, &c2);
	c1 = toupper(c1);
	c2 = toupper(c2);

	if(c1 == 'A')
		timeMin = hour * 60 + min;

	if(c1 == 'P')
		if(hour == 12)
			timeMin = hour * 60 + min;
		else
			timeMin = (hour + 12) * 60 + min;

	if (timeMin >= 131.75 && timeMin <= 531.5)
		printf("Closest departure time is 8:00AM, arriving at 10:16am");
	else if (timeMin >= 531.5 && timeMin <= 631)
		printf("Closest departure time is 9:43AM, arriving at 11:52am");
	else if (timeMin >= 631 && timeMin <= 723)
		printf("Closest departure time is 11:19AM, arriving at 1:31pm");
	else if (timeMin >= 723 && timeMin <= 803.5)
		printf("Closest departure time is 12:47PM, arriving at 3:00pm");
	else if (timeMin >= 803.5 && timeMin <= 892.5)
		printf("Closest departure time is 2:00PM, arriving at 4:08pm");
	else if (timeMin >= 892.5 && timeMin <= 1042.5)
		printf("Closest departure time is 3:45PM, arriving at 5:55pm");
	else if (timeMin >= 1042.5 && timeMin <= 1222.5)
		printf("Closest departure time is 7:00PM, arriving at 9:20pm");
	else if (timeMin >= 1222.5 || timeMin <= 131.75)
		printf("Closest departure time is 9:45PM, arriving at 11:58pm");

	return EXIT_SUCCESS;
}
