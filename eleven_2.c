#include<stdio.h>

#define LEN 10

char * getnchar(char * str, int n);
int main(void)
{
	char input[LEN];
	char *check;

	check = getnchar(input, LEN - 1);
	if(check == NULL)
		puts("Input failed.");
	else
		puts(input);
	puts("Done.\n");

	return 0;
}

char * getnchar(char * str, int n)
{
	int i;
	int ch;

	for(i = 0; i < n; i++)
	{
		ch = getchar();
		if(ch == ' ' || ch == '\n' || ch == '\t' || ch == EOF)
			break;
		else
			str[i] = ch;
	}
	if(ch == EOF)
		return NULL;
	else
	{
		str[i] = '\0';
		return str;
	}
}
