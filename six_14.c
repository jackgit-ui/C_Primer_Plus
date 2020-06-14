#include<stdio.h>
#define MAX 8
int main(void)
{
	double a[MAX], b[MAX];
	int i;

	for(i = 0; i < MAX; i++)
	{
		scanf("%lf", &a[i]);
	}
	b[0] = a[0];
	for(i = 1; i < MAX; i++)
	{
		b[i] = b[i-1] + a[i];
	}
	for(i = 0; i < MAX; i++)
	{
		printf("%10.3lf ",a[i]);
	}
	printf("\n");
	for(i = 0; i < MAX; i++)
	{
		printf("%10.3lf ",b[i]);
	}
	printf("\n");

	return 0;
}
