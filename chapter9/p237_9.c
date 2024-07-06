#include <stdio.h>
#include<math.h>

double power(double x, int n);

int main() {
	double y = 4.5;
	double z = power(y, 3);
	printf("%lf", z);

	return 0;
}

double power(double x, int n) {
	double tot;
	if (n > 0)
	{
		if (n > 1)
			tot = x * power(x, n - 1);
		else if (n == 1)
			tot = x;
	}
	else if (n < 0)
	{
		x = 1 / x;
		n = abs(n);

		if (n > 1)
			tot = x * power(x, n - 1);
		else if (n == 1)
			tot = x;
	}
	else
		tot = 1;
	return tot;
}
