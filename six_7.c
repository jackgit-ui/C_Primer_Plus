#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch[255];
	char a;
	int i = 0;

	printf("Please input a word:");
	scanf("%s",ch);
	for(i = strlen(ch); i >= 0; i--)
		printf("%c",ch[i]);
	printf("\n");

	return 0;
}
