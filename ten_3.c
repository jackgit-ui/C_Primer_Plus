#include<stdio.h>
int max(int [], int i);
int main(void)
{
	int arr[] = {1, 2, 45, 9, 8, 7};
	
	printf("%d\n", max(arr, 6));

	return 0;	
}

int max(int arr[], int n)
{
	int max;
	int i;

	for(i = 0, max = arr[0]; i < n; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}
