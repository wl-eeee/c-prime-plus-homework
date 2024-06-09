#include<stdio.h>

int sum(int* a, int* b);

int main()
{
	int x = 23;
	int y = 37;
	printf("%d\n", sum(&x, &y));

	return 0;
}

int sum(int* a, int* b)
{
	int c = *a + *b;

	return c;
}