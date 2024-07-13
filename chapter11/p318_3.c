#include "head.h"

void input1();
int main()
{
	input1();

	return 0;
}


void input1()
{
	FILE* fp = fopen("E:\\c\\outputtest\\abc.txt", "r");

	char a[51];
	char b[51];
	int na = 0;//counter
	int nb = 0;//counter


	fgets(a, 51, fp);

	while ((a[na] == ' ') || (a[na] == '\n') || (a[na] == '\t'))
		na++;
	while ((a[na] != ' ') && (a[na] != '\n') && (a[na] != '\t'))
	{
		b[nb] = a[na];
		na++;
		nb++;
	}

	b[nb] = '\0';//not nb + 1
	printf("%s\n", b);

	fclose(fp);


}
