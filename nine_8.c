#include<stdio.h>

double power(double n, int p)
{
	double pow = 1;
	int i;
	if(n == 0)
		pow = 0;
	if(n == 0 && p == 0)
	{
		printf("o power o does not define.\n");
		pow = 1;
	}
	if(p > 0)
	{
	for(i = 1; i <= p; i++)
		pow *= n;
	}
	else if (-p > 0)
	{
	for(i = 1; i <= -p; i++)
		pow *= n;
	pow = 1.0 / pow;
	}
	else
	{
		pow = 1;
	}	
		

	return pow;
}

int main(void)
{
	double n;
	int p;

	printf("Please input number.\n");
	scanf("%lf", &n);
	printf("Please input number.\n");
	scanf("%d", &p);
	while(1)
	{
		printf("%lf power %d is %lf\n", n, p, power(n, p));
	printf("Please input number.\n");
	scanf("%lf", &n);
	printf("Please input number.\n");
	scanf("%d", &p);
	}	
	
}
