#include "head.h"



void findvalue(int a[][12], int n);
void function1(int a[][12], int n);

int main()
{
	int a[5][12];
	int a1;
	int a2;
	for (a1 = 0; a1 < 5; a1++)
	{
		for (a2 = 0; a2 < 12; a2++)
			a[a1][a2] = a1 + a2;
	}

	findvalue(a, 5);
	function1(a,5);

	return 0;
}

void findvalue(int a[][12], int n)
{
	int c1;
	int c2;
	for (c1 = 0; c1 < 5; c1++)
	{
		for (c2 = 0; c2 < 12; c2++)
			printf("%d", a[c1][c2]);
		printf("\n");
	}
}

void function1(int a[][12], int n) {
	int c1 = 0;
	int c2 = 0;
	int allforoneyear = 0;
	puts("function1");
	int m = 0;
	int k[5];

	for (c1 = 0; c1 < n; c1++)
	{
		for (c2 = 0; c2 < 12; c2++)
		{
			allforoneyear += a[c1][c2];
			
		}
		printf("%d\n", allforoneyear);
		k[m] = allforoneyear; 
		printf("%d\n", k[m]);
		m++;
	
		allforoneyear = 0;
		

	}

	puts("function2");

	int average = (k[0] + k[1] + k[2] + k[3] + k[4]) / 5;

	printf("%d\n", average);

	puts("function3");

	int monthave = 0;

	for (c1 = 0; c1 < 12; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
		{
			monthave += a[c2][c1];
		}

		monthave /= 5;
		printf("%d\n", monthave);
	}

}

