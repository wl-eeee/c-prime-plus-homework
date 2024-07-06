#include "head.h"
int main()
{
	int a1 = 1;
	int a2 = 1;
	int n = 3;
	int all;
	for (n = 3; n < 46; n++)
	{
		all = a1 + a2;
		printf("%d %d\n", n, all);
		a1 = a2;
		a2 = all;
	}

	return 0;
	
}
