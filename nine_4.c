#include<stdio.h>

double tper(double a, double b)
{
	double per;

	per = (1/ a + 1 / b) / 2;
	return (1 / per);
}

int main(void)
{
	double a, b;

	printf("Please input two double numbers.\n");
	scanf("%lf%lf", &a, &b);
	printf("%lf and %lf t per is %lf\n", a, b, tper(a, b));

	return 0;
}
