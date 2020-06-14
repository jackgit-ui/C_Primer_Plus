#include<stdio.h>
#include<string.h>

#define LEN 20

char * mystrncpy(char * s1, char * s2, int n);
char * s_gets(char * st, int n);

int main(void)
{
	char s1[LEN] = "good";
	char s2[LEN] = "fuck you";
	int n = 9;
/*	char * a;
	char * b;
	a = s1;
	b = s2;
	*a++ = *b++;
	*a++ = *b++;
	puts(s1);	*/
/*	
	printf("Please input a string:");
	while(scanf("%s", s1) != -1)
	{
		printf("Please input another string:");
		scanf("%s", s2);
		scanf("%s", s2);
		printf("Please input a number:");
		scanf("%d", &n);
		printf("%s\n", mystrncpy(s1, s2, n));
		printf("Please input a string:");
	}
*/
	printf("%s\n %s\n %s\n", s1, s2, mystrncpy(s1, s2, n));
	printf("Done.\n");

	return 0;
}

char * mystrncpy(char s1[], char s2[], int n)
{
	int len;
	int i;
	char *start = s1;

	len = strlen(s2);
	if(n > len)
	{
/*
		while(*s2 != '\0')
			*s1++ = *s2++;
		*s1 = '\0';
*/
		for(i = 0; i < len; i++)
			s1[i] = s2[i];
		s1[i] = '\0';
	}
	else
	{

		for(i = 0; i < n; i++)
			s1[i] = s2[i];
		s1[i] = '\0';
	}
	return start;	
}
char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	
	return ret_val;
}
