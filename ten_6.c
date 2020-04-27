#include<stdio.h>

void sort(double [], int);
void show(double [], int);

int main(void)
{
	double arr[] = {1, 2, 0, 4, 10, 6};

	show(arr, 6);
	sort(arr, 6);
	show(arr, 6);

	return 0;	
}

void sort(double arr[], int n)
{
	int i, j;
	double temp;

	for(i = 0; i < n -1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(arr[j] > arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
	
}

void show(double arr[], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");
}
