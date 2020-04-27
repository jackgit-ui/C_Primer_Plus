#include<stdio.h>
int main(void)
{
	char ch;
	int space, enter, other;
	space = enter = other = 0;

	while((ch = getchar())!= '#')
	{
		if(ch == ' ')
			space++;
		else if(ch == '\n')
			enter++;
		else
			other++;
	}
	printf("%d %d %d\n",space, enter, other);

	return 0;
}
