#include "head.h"

void copy3_5(char* a,char*b);

int main()
{
	char a[7] = { 0,1,2,3,4,5,6 };
	char b[3];

	copy3_5(a, b);
	int n = 0;
	for (; n < 3; n++)
		printf("%d ", b[n]);

	return 0;
}

void copy3_5(char* a,char *b)
{
	int n = 2;
	for (n = 2; n < 5; n++)
		b[n - 2] = a[n];
}
