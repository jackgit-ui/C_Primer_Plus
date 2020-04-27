#include<stdio.h>
int main(void)
{
	char ch;
	int n = 0;

	while((ch = getchar()) != EOF)
	{
		if (ch >= 32)
		{
			printf("%c:%d ", ch, ch);
			n++;
		}
		else
		{
			if(ch == '\n')
			{
				printf("\n");
				printf("\\n:%d ", ch);
				n = 1;	
			}
			else if(ch == '\t')
			{
				printf("\\t:%d ", ch);
				n++;
			}
			else
			{
				n++;	
			}
		}
		if(n % 10 == 0)
			printf("\n");
	}

	return 0;
}
