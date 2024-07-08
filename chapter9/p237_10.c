#include "head.h"
int to_binary(int n, int b);//ten to other number

int main()
{
	int x = (to_binary(129,8));

	printf("%d", x);

	return 0;
}

int to_binary(int input, int b)//n is total b is the binary number b >=2 && b <=10
{
	int n;//counter for n
	int a[100];
	for (n = 0; n < 100; n++)
		a[n] = 0;

	n = 0;//storage for erery biary digit
	do {
	
		a[n] = input % b;//warning this is b not b^n
		printf("an%d input%d b%d n%d\n", a[n], input, b, n);
		input = (input - a[n]) / b; 
		printf("input%d an%d\n", input, a[n]);
		printf("\n");
		n++;
	} while (input > 0);

	int all = 0;
	int k = n;//the max digit
	for (n = 0; n < k; n++)
		all += a[n] * (pow(10, n));
	printf("all %d\n", all);

	return all;
}
