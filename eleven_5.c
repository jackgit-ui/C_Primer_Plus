#include<stdio.h>
#include<string.h>

int findstr(char * source, char * object);

int main(void)
{
	char s[] = "hello,world!";
	char o[] = "ell";
	
	printf("%d\n", findstr(s,o));
	
	return 0;
}

int findstr(char * source, char * object)
{
	int i, j;
	int start;

	i = j = 0;
	for(i = 0; i < strlen(source); i++)
	{
		start = i;
		j = 0;
		while(source[i] == object[j] && j < strlen(object))
		{
			i++;
			j++;
		}
		if(j == strlen(object))
			break;
	}
	if(start < strlen(source) - 1)
		return start;
	else
		return -1;	
}
