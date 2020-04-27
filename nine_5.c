#include<stdio.h>

void larger_of(double * a, double * b)
{
	if( *a > *b)
		*b = *a;
	else
		*a = *b;
}

int main(void)
{
	double a, b;

	printf("Please input two double numbers.\n");
	scanf("%lf%lf", &a, &b);
	printf("a = %lf, b = %lf\n", a, b);
	larger_of(&a,&b);
	printf("a = %lf, b = %lf\n", a, b);

	return 0;
}
