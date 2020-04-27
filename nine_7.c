#include<stdio.h>

int wherechar(char a)
{
	int n;

	if(a >= 'a'&& a <= 'z')
		n = a - 'a' + 1;
	else if(a >= 'A' && a <= 'Z')
		n = a - 'A' + 1;
	else 
		n = -1;
	return n;		
}

int main(void)
{
	char ch;

	printf("Please input string.\n");
	while(scanf("%c", &ch) != EOF)
	{
		if(ch == '\n')
			continue;
		if(wherechar(ch) != -1 )
		{
			printf("%c is char,its number is %d.\n",ch, wherechar(ch));
		}
		else
			printf("%c is not char.\n", ch);
		//printf("Please input string.\n");
	}

	return 0;
}
