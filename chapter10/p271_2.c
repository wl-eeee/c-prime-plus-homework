#include "head.h"

void copy1(double target1[], double source[], int n);
void copy2(double *target2, double *source, int n);
void copy3(double *target3, double *source, double* sose);//sose = source + 4

int main()
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];


	copy1(target1, source, 5);
	copy2(target2, source, 5);
	copy3(target3, source, source + 4);

	int n;
	for (n = 0; n < 5; n++)
		printf("target1 %lf\n", target1[n]);
	

	for (n = 0; n < 5; n++)
		printf("target2 %lf\n", target2[n]);

	for (n = 0; n < 5; n++)
		printf("target3 %lf\n", target3[n]);

	return 0;
}

void copy1(double target1[], double source[], int n)
{
	int x;
	for (x = 0; x < n; x++)
		target1[x] = source[x];

}

void copy2(double *target2, double *source, int n)
{
	int x;
	for (x = 0; x < n; x++)
		target2[x] = source[x];

}

void copy3(double* target3, double* source, double* sose)
{
	printf("%p %p\n", sose, source);
	int k = (sose - source);
	printf("%d\n", k);
	int x;
	for(x = 0; x < k+1; x++)
		target3[x] = source[x];
	
}
