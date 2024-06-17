#include <stdio.h>

double* max(double a, double b, double c);

int main() {

	double a = 1.0;
	double b = 3.0;
	double c = 2.0;

	max(a, b, c);

	
	return 0;

}

double* max(double a, double b, double c)
{

	double* max1, * max2, * max3;//max1 is the biggest number


	if (&a > &b)
	{
		if (&a > &c)
		{
			max1 = &a;
			if (&b > &c)
			{
				
				max2 = &b;
				max3 = &c;
			}
			else
			{
				max2 = &c;
				max3 = &b;
			}
		}
		else
		{
			max1 = &c;
			max2 = &a;
			max3 = &b;
		}

	}
	else
	{
		if (&c > &b)
		{
			max1 = &c;
			max2 = &b;
			max3 = &a;
		}
		else
		{
			max1 = &b;
			if (&a < &c)
			{
				max2 = &c;
				max3 = &a;

			}
			else
			{
				max2 = &a;
				max3 = &c;
			}
		}
	}

	printf("%p %p %p\n", max1, max2,max3);

	return 0;

	
}

//the code is useful but not beautiful XD
