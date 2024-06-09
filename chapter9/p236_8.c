#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mmax(int* a, int* b, int* c);
int main()
{
	int x = 2343;
	int y = 4324;
	int z = 2432;
	int ma = mmax(&x, &y, &z);
	printf("%d", ma);

	return 0;
}

int mmax(int* a, int* b, int* c)
{
	int max;
	(*a > *b) ? (max = *a) :(max = *b);
	(max > *c) ? (max = max) : (max = *c);

	return max;

}