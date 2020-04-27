#include<stdio.h>
int main(void)
{
	char ch; //接收输入的字符
	int n1;  //替换'.'计数
	int n2;  //替换'!'计数

	n1 = n2 = 0;  //计数器初始值为0
	while((ch = getchar())!= '#')  //循环接受输入的字符，直到输入#为止
	{
		if(ch == '.')
		{
			n1++;
			putchar('!');
		}
		else if (ch == '!')
		{
			n2++;
			putchar(ch);
			putchar(ch);
		}
		else
		{
			putchar(ch);
		}
	}
	printf(".:%d; !:%d", n1, n2);

	return 0;
}
