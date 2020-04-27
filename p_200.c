#include<stdio.h>
#include<stdio.h>
int main(void)
{
	int count = 0;
	char ch;

	/*
	while(count < 5)
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
		count++;
	}
	*/
	for(count = 0; count < 5; count++)
	{
		ch = getchar();
		if (ch == '\n')
			continue;
		putchar(ch);
	}

	return 0;
}
