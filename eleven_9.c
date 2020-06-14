#include <stdio.h>
#include <string.h>


char * reverse(char str[]);
int main(void)
{
	//char str[40] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char str[] = "gfedcba";
	char * get;
	
	while(scanf("%s", str) != -1)
	{
		get = reverse(str);
		puts(get);
		printf("input other string:");
	}

	return 0;
}

char * reverse(char str[])
{
	int len;
	int i, j;
	char temp;

	len = strlen(str);
	for(i = 0, j = len -1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	
	str[len] = '\0';

	return str;
}
