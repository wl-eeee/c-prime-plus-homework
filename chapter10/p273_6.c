#include "head.h"

double subtract(double* a,int length);

int main()
{
	double a[] = { 1.1, 2.2, 3.3 ,4.4};//use a[] not a[5] is a good idea!
	printf("%d\n", sizeof(a)/sizeof(a[0]));

	double x = subtract(a,sizeof(a)/sizeof(a[0]));
	printf("%lf\n",x);


	return 0;
}

double subtract(double* a,int length)
{
	int  n = 0;
	double small = a[0];
	double biggest = a[0];

	for (n = 1; n < length; n++)
	{
		if (a[n] < small)
			small = a[n];
		else if (a[n] > biggest)
			biggest = a[n];
	}

	return (biggest - small);
}
