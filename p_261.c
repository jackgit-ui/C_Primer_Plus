#include<stdio.h>

void to_binary(unsigned long n)
{
	unsigned long b;

	if(n  > 1 )
	{
		//b = n % 2;
		to_binary(n / 2);
		//printf("%d",b);
		printf("%d", n % 2);
	}
	else
		printf("%lu",n);
}

int main(void)
{
	unsigned int n;

	printf("Please input a number:");
	scanf("%lu", &n);
	to_binary(n);
	printf("\n");

	return 0;
}
