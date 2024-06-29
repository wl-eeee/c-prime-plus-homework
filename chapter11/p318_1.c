#include "head.h"

void in(char* copy);

int main()
{
	char x[100];
	in(x);
	int n = 0;
	for (; n < 100; n++)
		printf("%c\n", x[n]);

	return 0;
}

void in(char* copy)
{
	FILE* fp = fopen("a.txt", "r");

	char a[100];
	fgets(a, 50, fp);
	
	int n = 0;
	while (a[n] != '\0')
	{
		copy[n] = a[n];
		n++;
	}


}

//I use the input of file XD
