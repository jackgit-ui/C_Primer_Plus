#include<stdio.h>

long fact(int);
long rfact(int);

int main(void)
{
	int n;

	printf("Please input a number:");
	scanf("%d", &n);
	printf("%d!= %ld\n", n, fact(n));
	printf("%d!= %ld\n", n, rfact(n));
	
	return 0;
}

long fact(int n)
{
	long sum;

	for(sum = 1;n > 1; n--)
	{
		sum *= n;
	}
	
	return sum;
}

long rfact(int n)
{
	long ans;

	if(n == 0)
		ans = 1;
	else
		ans = n * rfact(n - 1);
	return ans;
}
