#include<stdio.h>
int main(void)
{
	char i, j, k, l;
	char a, b,ch;

	printf("Please input a char:");
	scanf("%c", &ch);
	for(b = 'A';b <= ch;b++)
	{
		for(i = b; i < ch; i++)
			printf(" ");
		for(a = 'A'; a <= b; a++)
			printf("%c",a);
		for(j = b - 1; j >= 'A'; j--)
			printf("%c",j);
		for(i = b; i < ch; i++)
			printf(" ");
		printf("\n");
	}

	return 0;
}
