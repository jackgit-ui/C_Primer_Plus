#include<stdio.h>
int main(void)
{
	char ch;
	int n1, n2;

	n1 = n2 = 0;
	while((ch = getchar()) != '#')
	{
		switch(ch)
		{
			case '.':n1++;
				 putchar('!');
				 break;
			case '!':n2++;
				 putchar('!');
				 putchar('!');
				 break;
			default :putchar(ch);
				
		}
	}
	printf(".:%d,!:%d\n", n1, n2);

	return 0;
}
