/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//project3.3
//	int isbn, prefix, iden, code, num, check;
//
//	printf("Enter ISBN: ");
//	scanf("%d-%d-%d-%d-%d", &prefix, &iden, &code, &num, &check);
//
//	printf("prefix:%d\n", prefix);
//	printf("iden:%d\n", iden);
//	printf("code:%d\n", code);
//	printf("num:%d\n", num);
//	printf("check:%d\n", check);
//
//	return EXIT_SUCCESS;


//project3.5
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p, rSum1, rSum2, rSum3, rSum4,
	cSum1,cSum2,cSum3,cSum4,dSum1,dSum2;

	printf("enter number:");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
	rSum1 = a + b + c + d;
	rSum2 = e +f + g +h;
	rSum3 = i +j+k+l;
	rSum4 = m+n+o+p;
	cSum1 = a +e+i+m;
	cSum2 = b+f+j+n;
	cSum3 = c+g+k+o;
	cSum4 = d+h+l+p;
	dSum1 = a+f+k+p;
	dSum2 = d+ g+j+m;


	printf("%d\t%d\t%d\t%d\n", a,b,c,d);
	printf("%d\t%d\t%d\t%d\n", e,f,g,h);
	printf("%d\t%d\t%d\t%d\n", i,j,k,l);
	printf("%d\t%d\t%d\t%d\n", m,n,o,p);

	printf("Row Sums: %d\t%d\t%d\t%d\n", rSum1, rSum2, rSum3, rSum4);
	printf("Column Sums: %d\t%d\t%d\t%d\n", cSum1, cSum2, cSum3, cSum4);
	printf("Diagonal Sums: %d\t%d\n", dSum1, dSum2);



	return 0;
}
