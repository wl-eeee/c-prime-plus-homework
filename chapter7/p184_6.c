#include "head.h"
int main()
{

	FILE* fp = fopen("E:\\c\\outputtest\\abc.txt", "r");
	char a[50];
	fgets(a, 50, fp);

	int n = 0;
	int ei = 0;
	while (a[n] != '#'&& n < 50)
	{
		if (a[n] == 'e' && a[n + 1] == 'i')
			ei++;
			n++;
	}

	printf("%d\n", ei);

	return 0;
}
