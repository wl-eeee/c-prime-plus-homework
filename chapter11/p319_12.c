#include "head.h"
int main()
{
	char a[50] = "fewferagrgvgr gag afwaffol;.''o142)";

	int words = 0, big = 0, small = 0, digit = 0,  punct = 0;

	char b;
	int n = 0;

	while (a[n]!= '\0')
	{
		if (isblank(a[n]))
			words++;
		else if (isupper(a[n]))
			big++;
		else if(islower(a[n]))
			small++;
		else if(isdigit(a[n]))
			digit++;
		else if(ispunct(a[n]))
		punct++;
		n++;
	}
	

	printf("words = %d\nbig = %d\nsmall = %d\ndigit = %d\npunct = %d\n", words, big, small, digit, punct);

	return 0;

}
