#include<stdio.h>
#include<string.h>

char * string_in(char * s1, char * s2);

int main(void)
{
	char *s1;
	char *s2;

	s1 = "good moning";
	s2 = "mo";
	char * ret = string_in(s1, s2);
	printf("%s\n", ret);	

	return 0;
}

char * string_in(char * s1, char * s2)
{
	int i, j;
	int start;

	for(i = 0; i < strlen(s1); i++)
	{
		j = 0;
		start = i;
		while(s1[start] == s2[j])
		{
			start++;
			j++;
		}
		if((start - i + 1) == strlen(s2))
			break;
	}
	if(i < strlen(s1))
		return &s1[i];
	else
		return NULL;	
}
