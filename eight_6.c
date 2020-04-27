#include<stdio.h>

char get_first(void);

int main(void)
{
	printf("%c\n", get_first());	
}

char get_first(void)
{
	int ch;

	while((ch = getchar()) == '\n')
		continue;
	while(getchar() != '\n')
		continue;

	return ch;
}
