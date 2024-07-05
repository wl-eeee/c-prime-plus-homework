#include "head.h"

#define wagehour 1000
int main()
{
	int xwage;
	if (wagehour <= 40)
		xwage = wagehour * 40;
	else
		xwage = 40 * 10 + (wagehour - 40) * 10;

	int tax;

	if (xwage <= 300)
		tax = xwage * 15 * 0.15;
	else if (xwage <= 450)
		tax = 300 * 0.15 * (xwage - 300) * 0.2;
	else
		tax = 300 * 0.15 * 150 * 0.2 + (xwage - 450) * 0.25;

	int all = xwage - tax;

	printf("%d %d %d\n", xwage, tax, all);

	return 0;
	
}
