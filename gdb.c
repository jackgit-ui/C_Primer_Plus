#include<stdio.h>
int main(void)
{
	int a, b, c;
	int i;

	for(i = 0; i < 4; i++)
	{
		printf("%d\n",i);
	}
	a = 1;
	b = 2;
	c = 3;
	a = b + c;
	b = a + c;
	a *= 10;
}
