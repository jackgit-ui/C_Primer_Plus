#include <stdio.h>
#include <string.h>

char * delspace(char str[])
{
	int i,j,len;

	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[i] == ' ' || str[i] == '\t')
		{
			for(j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			str[j] = '\0';
			len = strlen(str);
			i--;
		}
	}
	
	return str;
}

int main(void)
{
	char str[] = "good   moning 		sir.";

	puts(delspace(str));

	return 0;
}
