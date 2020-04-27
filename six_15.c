#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[255];
	int i;

	printf("Please input a string:");
	scanf("%s",str);
	for(i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%c", str[i]);	
	}
	printf("\n");
	
	return 0;
}
