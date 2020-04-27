#include<stdio.h>
int main(void)
{
	char ch = '$';
	int i, j;
	const int column = 8;
	const int cow = 4;

	for(i = 0; i < cow; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}
