#include<stdio.h>

void add(int *one, int *two, int *sum, int n);
void show(int *arr, int n);

int main(void)
{
	int one[] = {1, 2, 3};
	int two[] = {4, 5, 6};
	int sum[3];

	add(one, two, sum, 3);
	show(one, 3);
	show(two, 3);
	show(sum, 3);

	return 0;
}

void add(int *one, int *two, int *sum, int n)
{
	int i;

	for(i = 0; i < n;i++)
	{
		*(sum + i) = *(one + i) + *(two + i);
	}
}

void show(int *arr, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
