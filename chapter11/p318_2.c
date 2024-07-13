#include "head.h"

void input1(int n);
int main()
{
	input1(50);

	return 0;
}

void input1(int n)
{
	FILE* fp = fopen("E:\\c\\outputtest\\abc.txt", "r");

	char a;
	char b[51];
	int counter = 0;
	while (((a = getc(fp)) && (a!= ' ') &&(a !='\n') &&(a != '\t') && counter < n))
	{
		putchar(a);
		b[counter] = a;
	}

	b[counter] = '\0';

	printf("%s\n", b);

}
