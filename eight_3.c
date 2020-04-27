#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int lc;
	int uc;
	char ch;

	lc = uc = 0;
	while((ch = getchar()) != EOF)
	{
		if(islower(ch))
		{
			lc++;
		}
		else if(isupper(ch))
		{
			uc++;
		}
		else
		{
			printf("Please input char.\n");
		}
	}
	printf("low:%d;up:%d\n", lc, uc);

	return 0;	
}
