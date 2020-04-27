#include<stdio.h>
int main(void)
{
	char pre, ch; //记录前一个字符和当前字符
	int n = 0;   //记录'ei'次数

	pre = getchar();
	while((ch = getchar()) != '#')
	{
		if(pre == 'e' && ch == 'i')
			++n;
		pre = ch;
	}
	printf("'ei'出现次数为：%d次。\n", n);

	return 0;
}
