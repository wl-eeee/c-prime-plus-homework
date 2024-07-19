#include "head.h"

int fib(int n);
int fib2(int n);
int main()
{
	int x = fib2(46);
	printf("%d", x);

	return 0;
}

int fib(int n)
{
	int all;
	if (n == 1 || n == 2)
		all = 1;
	else
	{
		all = fib(n - 1) + fib(n - 2);
	}

	return all;

}

int fib2(int n)
{
	int x = 3;//count
	int all = 0;
	int a1 = 1;// first item
	int a2 = 1;// second item
	if (n == 1 || n == 2)
		all = 1;
	else
	{
		for (; x <= n; x++)
		{
			all = a1 + a2;
			a1 = a2;
			a2 = all;
			printf("%d\n", all);
		}

	}

	return all;
}
