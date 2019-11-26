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

	int hour, min;
	char x;

	printf("Enter a 24-hour time:");
	scanf("%d:%d", &hour, &min);

	switch (hour) {
	case 0:
	case 24:
		hour = 0;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 1:
		hour = 1;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 2:
		hour = 2;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 3:
		hour = 3;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 4:
		hour = 4;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 5:
		hour = 5;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 6:
		hour = 6;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 7:
		hour = 7;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 8:
		hour = 8;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 9:
		hour = 9;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 10:
		hour = 10;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;
	case 11:
		hour = 11;
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
		break;

	case 12:
		hour = 00;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 13:
		hour = 1;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 14:
		hour = 2;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 15:
		hour = 3;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 16:
		hour = 4;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 17:
		hour = 5;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 18:
		hour = 6;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 19:
		hour = 7;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 20:
		hour = 8;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 21:
		hour = 9;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 22:
		hour = 10;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;
	case 23:
		hour = 11;
		printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
		break;

		/*
		 * knking solutions
		 *
		 *
		 * 	int hours, minutes;

		 printf("Enter a 24-hour time: ");
		 scanf("%d:%d", &hours, &minutes);

		 printf("Equivalent 12-hour time: ");
		 if (hours == 0)
		 printf("12:%.2d AM\n", minutes);
		 else if (hours < 12)
		 printf("%d:%.2d AM\n", hours, minutes);
		 else if (hours == 12)
		 printf("%d:%.2d PM\n", hours, minutes);
		 else
		 printf("%d:%.2d PM\n", hours - 12, minutes);
		 *
		 */

	}
	return EXIT_SUCCESS;
}
