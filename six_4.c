#include<stdio.h>
int main(void)
{
	int i, j;
	char ch = 'A';

	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < i + 1; j++)
			printf("%c", ch + j);
		ch = ch + j;
		printf("\n");
	}

	return 0;
}
