#include<stdio.h>

void getword(char word[]);

int main(void)
{
	char word[40];

	getword(word);
	puts(word);

	return 0;
}


void getword(char word[])
{
	char ch;
	int i = 0;

	ch = getchar();
	while(ch == ' ' || ch == '\n' || ch == '\t')
	{
		ch = getchar();
	}
	printf("swipe space\n");
	putchar(ch);
	printf("\n");
	word[i++] = ch;
	ch = getchar();
	while(ch != ' ' && ch != '\n' && ch != '\t')
	{
		word[i++] == ch;
		ch = getchar();
	}
	word[i] = '\0';
}
