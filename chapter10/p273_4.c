#include<stdio.h>

int max(double *a,int size);

int main()
{
	double a[10] = { 1.2, 3.4, 5.6, 7.8, 9.0, 1.3 ,9.9};
	int size1 = sizeof(a) / sizeof(a[0]);
	printf("%d\n", size1);

	int b = max(a,size1);

	printf("%d", b);

	return 0;
}

int max(double *a,int size)
{
	

	int n = 0;//counter

	int down=0;//the subscript of the max vlaue

	for (n = 1; n < size; n++)//how to find 10 ???
	{
		printf("a[0]%lf a[n]%lf\n", a[0], a[n]);
		if( a[0] < a[n])
		{
			a[0] = a[n];
			down = n;
		}	
	}

	return down;


}

//in row 26 how to find the size 10 in sum function is a real complex question 
//in this answer it is found in main function
