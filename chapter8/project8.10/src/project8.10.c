/*
 ============================================================================
 Name        : 10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int hour, min, timeMin, abs1, abs2, hour2,min2, comp;
	int departure[7] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	int arrival[7] =   {616, 712, 811, 900, 968, 1075, 1280, 1438};
//	int y[7] = {131.75, 531.5, 631, 723, 803.5, 892.5, 1042.5, 1222.5};
//	int x[7] = {531.5, 631, 723, 803.5, 892.5, 1042.5, 1222.5, 131.75};

	printf("Enter a 24-hour time:");
	scanf("%d:%d", &hour, &min);
	timeMin = hour * 60 + min;

//	if(timeMin >= )
//	for(int i=0; i<(sizeof(departure)/sizeof(departure[0])); i++)
//	{
		abs1 = abs(timeMin - departure[i]);
		if(i+1 == 7)
			abs2 = abs(timeMin - departure[0]);
		else
			abs2 = abs(timeMin - departure[i+1]);


	for(int i=0; i<(sizeof(departure)/sizeof(departure[0])); i++){
		if(i+1 == 7)
			comp = (abs1 > abs2) ? departure[0] : departure[i];
		else
			comp = (abs1 > abs2) ? departure[i+1] : departure[i];
	}






//		abs1 = abs(timeMin - departure[i]);
//		if(i+1 == 7)
//			abs2 = abs(timeMin - departure[0]);
//		else
//			abs2 = abs(timeMin - departure[i+1]);
//		if(i+1 == 7)
//			comp = (abs1 > abs2) ? departure[0] : departure[i];
//		else
//			comp = (abs1 > abs2) ? departure[i+1] : departure[i];
//		printf("%d %d %d \n", abs1, abs2, comp);
//			min2 = departure[i] % 60;
//			hour2 = departure[i] / 60;
//			printf("Closest departure time is %d:%d", hour2, min2);
	}

//	if (timeMin >= 131.75 && timeMin <= 531.5)
//		printf("Closest departure time is 8:00AM, arriving at 10:16am");
//	else if (timeMin >= 531.5 && timeMin <= 631)
//		printf("Closest departure time is 9:43AM, arriving at 11:52am");
//	else if (timeMin >= 631 && timeMin <= 723)
//		printf("Closest departure time is 11:19AM, arriving at 1:31pm");
//	else if (timeMin >= 723 && timeMin <= 803.5)
//		printf("Closest departure time is 12:47PM, arriving at 3:00pm");
//	else if (timeMin >= 803.5 && timeMin <= 892.5)
//		printf("Closest departure time is 2:00PM, arriving at 4:08pm");
//	else if (timeMin >= 892.5 && timeMin <= 1042.5)
//		printf("Closest departure time is 3:45PM, arriving at 5:55pm");
//	else if (timeMin >= 1042.5 && timeMin <= 1222.5)
//		printf("Closest departure time is 7:00PM, arriving at 9:20pm");
//	else if (timeMin >= 1222.5 || timeMin <= 131.75)
//		printf("Closest departure time is 9:45PM, arriving at 11:58pm");

	return EXIT_SUCCESS;
}
