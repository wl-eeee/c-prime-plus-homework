#include "head.h"
int main()
{
	int a = 0;
	int b = 0;
	int data[5][5];
	for (a= 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
			data[a][b] = a * b;
	}
	int all = 0;
	for (b = 0; b < 5; b++)
	{
		all = all +*(data[2]+b);
	}

	printf("%d\n", all / 5);
		
	

	return 0;
}
