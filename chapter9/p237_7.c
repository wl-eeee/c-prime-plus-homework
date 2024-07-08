#include "head.h"

void ischaracter(char a)//judge whether the input is a character
{
	int ischar = 0;//if it is a character, then ischar = 1
	int location = 0;
	if (a >= 'A' && a <= 'z')
		ischar = 1;

	if (ischar == 1)
	{
		if (a >= 'A' && a <= 'Z')
			location = (int)(a - 'A' + 1);
		else
			location = (int)(a - 'a' + 1);
	}

	printf("%d\n%d\n", ischar, location);

	return 0;

}
int main()
{
	char a = 'h';
	ischaracter(a);
	return 0;


}

