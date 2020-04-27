#include<stdio.h>
int main(void)
{
	int n = 0;
	char ch;
	
	while((ch = getchar()) != '#')
	{
		printf("%c:%d ",ch, ch);
		n++;
		if(n % 8 == 0)
			printf("\n");
	}

	return 0;
}
