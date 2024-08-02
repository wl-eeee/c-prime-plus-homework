#include "head.h"
int main()
{
	char a[50] = "aga gdsf";

	char input[50];

	int na = 0;
	int ni = 0;

	
	for (; a[na] != '\0'; na++)
	{
		if (a[na] != ' ')
		{
			input[ni] = a[na];
			ni++;
		}
	
	}

	input[ni] = '\0';
	printf("%s\n", input);

	return 0;

}
