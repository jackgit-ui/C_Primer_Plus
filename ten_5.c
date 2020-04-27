#include<stdio.h>

double cha(double [], int n);

int main(void)
{
	double arr[] = {1, 2, 3, 4, 6};
	printf("%lf\n",cha(arr, 5));

	return 0;
}


double cha(double arr[], int n)
{
	double min, max;
	int i;

	min = max = arr[0];
	for(i = 1; i < n; i++)
	{
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}

	return max - min;	
}
