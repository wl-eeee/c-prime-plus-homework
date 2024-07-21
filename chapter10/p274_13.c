#include "head.h"

void functionb(int a[][5]);
void functionc(int a[][5]);
void functiond(int a[][5]);
void functione(int a[][5]);

int main()
{
	int a[3][5];

	
	int c1 = 0;
	int c2 = 0;

	for (c1 = 0; c1 < 3; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
			a[c1][c2] = c1 + c2;
	}
	//test
	for (c1 = 0; c1 < 3; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
			printf("%d\n", a[c1][c2]);
	}

	functionb(a);
	functionc(a);
	functiond(a);
	return 0;

}

/*
* void function1(int a[][5])
{
	int c1 = 0;
	int c2 = 0;
	for (c1 = 0; c1 < 3; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
			scanf_s("%d", &(a[c1][c2]), sizeof(a[c1][c2]));
	}
}
*/

void functionb(int a[][5])
{

	int c1 = 0;
	int c2 = 0;
	int k[3] = { 0 };
	int n = 0;
	puts("functionb");

	for (c1 = 0; c1 < 3; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
			k[n] += a[c1][c2];
		k[n] /= 5;
		printf("%d\n", k[n]);
		n++;
	}

}

void functionc(int a[][5])
{
	int c1 = 0;
	int c2 = 0;
	int all =  0 ;
	
	puts("functionc");

	for (c1 = 0; c1 < 3; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
			all += a[c1][c2];
	}
	all /= 15;
	printf("%d\n", all);
}

void functiond(int a[][5])
{
	int c1 = 0;
	int c2 = 0;
	int biggest = a[c1][c2];

	puts("functiond");

	for (c1 = 0; c1 < 3; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
		{
			if (a[c1][c2]>biggest  )
				biggest = a[c1][c2];
		}
	}
	
	printf("%d\n", biggest);
}

void functione(int a[][5])
{
	//it has been found in abcd
}
