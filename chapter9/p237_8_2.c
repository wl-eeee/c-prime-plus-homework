#include "head.h"

double power(double x,int n);

int main()
{
	double x = power(0, -0);
	printf("%lf\n", x);

	return 0;

}

double power(double x,int n){
	double back;
	if (n > 0)
		back = pow(x, n);
	else if (n < 0)
	{
		x = 1 / x;
		back = pow(x, -n);
	}
	else
	{
		if (x ==0 &&n == 0)
		{
			printf("no definition\n");
			back = 1;
		}
			
		else
			back = 1;
		
	}

	return back;
}
