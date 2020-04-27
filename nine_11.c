#include<stdio.h>

unsigned long Fibonacci(unsigned n)
{
	if (n > 2)
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	else
		return 1;
}

int main(void)
{
	int n;
	
	printf("Please input a number.\n");
	scanf("%d", &n);
	printf("%ld ", Fibonacci(n));
	printf("\n");
}
