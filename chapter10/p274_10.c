#include "head.h"

void sum(char* a, char* b, char* c, int n);

int main()
{
	char a[4] = { 2,4,5,8 };
	char b[4] = { 1,0,4,6 };
	char c[4];

	sum(a, b, c, 4);
	int n = 0;

	for (n = 0; n < 4; n++) 
		printf("%d ", c[n]);

	return 0;
}

void sum(char* a, char* b, char* c, int n)
{
	int t = 0;
	for (t = 0; t < n; t++)
		c[t] = a[t] + b[t];


}
