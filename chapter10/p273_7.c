#include "head.h"

int main()
{
	double good[5][5];
	int a = 0;
	int b = 0;
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
			good[a][b] = a + b;
	}

	double verygood[5][5];
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
			verygood[a][b] = good[a][b];
	}

	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
			printf("%lf\n", verygood[a][b]);
	}

	return 0;
}
