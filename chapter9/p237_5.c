#include<stdio.h>

double large_of(double* a, double* b);

int main()
{
	double a = 15.5;
	double b = 13.4;

	large_of(&a, &b);

	printf("a = %f, b = %f", a, b);

	return 0;
}

double large_of(double* a, double* b)
{
	if (*a > *b)
	{
		*b = *a;
	}
	else
		(*a = *b);

}