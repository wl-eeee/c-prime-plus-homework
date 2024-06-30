#include "head.h"

int main()
{
	char a;
	int space1 = 0;
	int enter1 = 0;
	int others = 0;
	while ((a = getchar()) != '#')
	{
		if(a == ' ')
			space1++;
		else if(a == '\n')
			enter1++;
		else
			others++;
		
	}
	putchar(a);

	printf("%d %d %d\n", space1, enter1, others);

	return 0;
}