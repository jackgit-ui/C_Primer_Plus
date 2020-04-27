#include<stdio.h>

void copy_arr(double target1[], double source[], int n);
void out(double a[], int n);

int main(void)
{
	double seven[] = {1, 2, 3, 4, 5, 6, 7};
	double three[3];

	copy_arr(three,seven + 2,3);
	out(seven, 7);
	out(three, 3);

	return 0;		
}


void copy_arr(double target1[], double source[], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		target1[i] = source[i];
	}
}
void out(double a[], int n)
{
	int i;

	for(i = 0; i < n; i++)
		printf("%lf ", a[i]);
	printf("\n");
}
