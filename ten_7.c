#include<stdio.h>

void copy_arr(double target1[], double source[5], int n);
void show(double [3][4]);

int main(void)
{
	double arr[][4] = {{1, 3, 4, 5},
			   {2, 4, 6, 8},
			   {9, 8, 7, 4}};

	double arr2[3][4];
	int i;

	for(i = 0; i < 3; i++)
	{
		copy_arr(arr2[i], arr[i], 4);
	}
	show(arr);
	printf("\n");
	show(arr2);

	return 0;
}





void show(double arr[3][4])
{
	int i, j;

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j ++)
		{
			printf("%.3lf  ", arr[i][j]);
		}
		printf("\n");
	}
}

void copy_arr(double target1[], double source[5], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		target1[i] = source[i];
	}
}
