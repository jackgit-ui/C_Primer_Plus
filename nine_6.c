#include<stdio.h>

void sort(double * a, double * b, double * c)
{
	int temp;

	if(*b < *a)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if(*c < *a)
	{
		temp = *a;
		*a = *c;
		*c = temp;
	}
	if(*c < *b)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
		
}

int main(void)
{
	double a, b, c;

	printf("Please input three numbers.\n");
	while(scanf("%lf%lf%lf", &a, &b, &c) == 3)
	{
		printf("a,b and c is:%lf %lf %f\n", a, b, c);
		sort(&a, &b, &c);
		printf("a,b and c is:%lf %lf %f\n", a, b, c);
	}
	printf("Bye!\n");
	
}
