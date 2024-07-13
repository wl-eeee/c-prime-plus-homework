#include "head.h"

void get1(char* copy, int n);

int main() {
	char copy[50];
	get1(copy, 50);
	printf("%s", copy);

	return 0;

}

void get1(char* copy, int n)
{
	FILE* fp = fopen("E:\\c\\outputtest\\abc.txt", "r");
	char a;
	int counter = 0;//counter
	
	while (((a = getc(fp)) != EOF) && counter < n - 1)//notice the parentheses
	{
		copy[counter] = a;
		counter++;
	}

	copy[counter] = '\0'; // 添加字符串结束符
	fclose(fp);


}
