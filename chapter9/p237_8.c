#include <stdio.h>
#include<math.h>

double power(double x, int n);

int main() {
	double y = 5;
	double z = power(y, 0);
	printf("%lf", z);

	return 0;
}

double power(double x, int n) {
	double i = 1.0;
	if (n > 0)
	{
		for (; n > 0; n--)
			i = i * x;
	}
	else if (n < 0)
	{
		x = 1 / x;
		n = abs(n);

		for (; n > 0; n--)
			i = i * x;
	}
	else
		i = i;
	return i;
}
