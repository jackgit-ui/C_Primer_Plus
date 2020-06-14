#include<stdio.h>
#include<string.h>

#define LEN 30

int is_within(char * str, char ch);

int main(void)
{
	char str[LEN] = "good moning.";
	char ch = 'a';
	/*
	printf("Please input a string.\n");
	scanf("%s",str);
	printf("Please input a char.\n");
	scanf("%c", &ch);
	printf("$s %c", str, ch);
	while(str[0] != '$')
	{
	if(is_within(str, ch))
		printf("Yes!");
	else
		printf("No!");
	printf("Please input a string.\n");
	scanf("%s",str);
	printf("Please input a char.\n");
	scanf("%c", &ch);
	}
	*/
	
	if(is_within(str, ch))
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}


int is_within(char * str, char ch)
{
	int i;

	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] == ch)
			break;
	}
	if(i < strlen(str))
		return 1;
	else
		return 0;
	
}
