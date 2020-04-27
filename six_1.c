#include<stdio.h>
int main(void)
{
	/*
	char ch = 'a', alphbet[26];
	int i;
	
	alphbet[0] = ch;
	for(i = 1; i < 26; i++)
	{
		alphbet[i] = ch + 1;
		ch += 1;
	}
	for(i = 0; i < 26; i++)
	{
		printf("%c ",alphbet[i]);
	}
	printf("\n");
	*/
	char al[26];
	int i;

	for(i = 0; i < 26; i++)
		al[i] = 'a' + i;
	for(i = 0; i < 26; i++)
		printf("%c ",al[i]);
	printf("\n ");

	return 0;
}
