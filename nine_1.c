#include<stdio.h>

double min(double x, double y)
{
	return x > y ? y : x;
}
int main(void)
{
	double a, b;
	printf("Please input two double numbers, i will tell you which is small.\n");
	while(scanf("%lf%lf",&a, &b) == 2)
	{
		printf("small is %lf.\n", min(a,b));
		printf("Iput two numbers again.\n");
	}
	printf("Input error!\nBye!\n");

	return 0;	
}
