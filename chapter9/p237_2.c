#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int chline(char ch, int i, int j);
int main()
{
	chline('#', 5, 10);
	return 0;
}

int chline(char ch, int i, int j)
{
	
	int n1;//the counter of row
	int n2;//the counter of column
	for (n2 = 0; n2 < i; n2++)
	{
		for (n1 = 0; n1 < j; n1++)
			printf("%c", ch);
		printf("\n");
	}
}