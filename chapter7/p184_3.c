#include "head.h"

int main()
{
	FILE* fp = fopen("E:\\c\\outputtest\\abc.txt", "r");
	char a[100];
	fgets(a, 50, fp);

	int odd[50];
	int even[50];
	int oddnum = 0;
	int evennum = 0;

	int n = 0;//counter
	//循环的顺序... 是什么样子的呢
	while (a[n] !='0' && n < 50)
	{
		if (a[n] % 2 == 0)
		{
			even[evennum] = a[n];
			evennum++;
			printf("euvenum %d\n", evennum);
		}
		else
		{
			odd[oddnum] = a[n];
			oddnum++;
			printf("oddnum %d\n", oddnum);
		}

		n++;
	}

	printf("%d %d\n", oddnum, evennum);

	return 0;
}
