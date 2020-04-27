#include<stdio.h>

void copy_arr(double target1[], double source[], int n);
void copy_ptr(double target2[], double source[], int n);
void copy_ptrs(double target3[], double source[], double * p);
void out(double a[5], int n);

int main(void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);
	out(source, 5);
	out(target1, 5);
	out(target2, 5);
	out(target3, 5);
	
	return 0;
}

void copy_arr(double target1[], double source[5], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		target1[i] = source[i];
	}
}

void copy_ptr(double * target1, double * source, int n)
{
	int i;
	double *p, *q;
	p = target1;
	q = source;
	for(i = 0; i < n; i++)
	{
		*p++ = *q++;
	}
}

void copy_ptrs(double * target1, double * source, double * r)
{
	int i;
	double *p, *q;
	p = target1;
	q = source;
	while(q < r)
	{
		*p++ = *q++;
	}
}
void out(double a[5], int n)
{
	int i;

	for(i = 0; i < n; i++)
		printf("%lf ", a[i]);
	printf("\n");
}
