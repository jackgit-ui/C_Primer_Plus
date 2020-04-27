#include<stdio.h>
int main(void)
{
	int n;
	int i;
	
	printf("Please input a number:");
	while(scanf("%d", &n) == 1)
	{
		for(i = 2; i <= n; i++)
		{
			if(isprime(i))
				printf("%d ",i);
		}
		printf("\n");
		printf("Please input other number:");
	}
}
int isprime(int n)
{
	int i;
	
	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
			break;
	}
	if(i == n)
		return 1;
	else
		return 0;
}
