#include<stdio.h>

void chline(char ch, int i, int j)
{	
	int n = j;

	for(;i > 0;i--)
	{
		j = n;
		for(;j > 0; j--)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}

int main(void)
{
	char ch;
	int i, j;

	printf("Please input char that you want to print.\n");
	scanf("%c", &ch);
	printf("Please input cow and column.\n");
	scanf("%d%d", &i, &j);
	chline(ch,i,j);

	return 0;
}
