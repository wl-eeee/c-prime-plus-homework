#include "head.h"

int main()
{
	char a;
	int n = 0;//counter
	while ((a = getchar()) != '#')
	{
		if (n % 8 == 0 && n !=0)
			printf("\n");

		if (a != '\n')
		{
			printf("%c-%d ", a,a);
			n++;
		}
		else
		{
			printf("%c-%d ", a, a);
			n++;
		}
		
	}
	putchar(a);

	return 0;
}