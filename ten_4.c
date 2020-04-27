#include<stdio.h>
int max(double [], int n);
int main(void)
{
	double arr[] = {1, 2, 0, 9, 8, 7};
	
	printf("%d\n", max(arr, 6));

	return 0;	
}

int max(double arr[], int n)
{
	double max;
	int i;
	int j;

	for(i = 0, max = arr[0]; i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			j = i;
		}
	}
	return j;
}
