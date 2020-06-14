#include<stdio.h>
#include<ctype.h>

#define LEN 80

char * getword(char * str, int n);

int main(void)
{
	char input[LEN];

	while(getword(input, 3) != NULL)
		puts(input);
	puts("Done.\n");

	return 0;	
}

char * getword(char * str, int n)
{
	int ch;
	char * orig = str;
	int count = 0;

	//skip space
	while((ch = getchar()) != EOF && isspace(ch))
		continue;
	if(ch == EOF)
		return NULL;
	else
	{
		*str++ = ch;
		count++;
	}
	//get rest word
	while((ch = getchar()) != EOF && !isspace(ch) && count < n)
	{
		*str++ = ch;
		count++;
	}
	*str = '\0';
	
	if(ch == EOF)
		return NULL;
	else
	{
		while(ch != '\n')
			ch = getchar();
		return orig;
	}
}
