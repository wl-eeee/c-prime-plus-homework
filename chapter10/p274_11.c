#include "head.h"

void findvalue(int a[][5], int n);
void value2(int a[][5], int n);

int main()
{
	int a[3][5];
	int a1;
	int a2;
	for (a1 = 0; a1 < 3; a1++)
	{
		for (a2 = 0; a2 < 5; a2++)
			a[a1][a2] = a1 + a2;
	}

	findvalue(a, 3);
	value2(a, 3);
	findvalue(a, 3);

	return 0;
}

void findvalue(int a[][5], int n)
{
	int c1;
	int c2;
	for (c1 = 0; c1 < n; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
			printf("%d", a[c1][c2]);
		printf("\n");
	}
}

void value2(int a[][5], int n)
{
	int c1;
	int c2;
	for (c1 = 0; c1 < n; c1++)
	{
		for (c2 = 0; c2 < 5; c2++)
			a[c1][c2] *= 2;
	}

}
