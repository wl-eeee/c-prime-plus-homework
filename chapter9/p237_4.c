#include<stdio.h>

double ave(double* a, double* b);

int main() {

	double x = 1.0;
	double y = 2.0;

	double c =	ave(&x, &y);

	printf("%lf\n", c);

	return 0;
}


double ave(double* a, double* b)

{
	printf("%lf\n", *a);
	double  a1 = 1 /(*a);
	printf("%lf\n", a1);
	double  b1 = 1 /(*b)	;
	printf("%lf\n", b1);
	double c = (a1 + b1) / 2;
	double d = 1 / c;

	return d;
}