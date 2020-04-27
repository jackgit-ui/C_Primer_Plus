#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	int words = 0;

	while((ch = getchar()) != EOF)
	{
		if(isalnum(ch))
		{
			words++;
			while(isalnum(ch))
				ch = getchar();
		}
	}
	printf("words:%d\n", words);

	return 0;
}
