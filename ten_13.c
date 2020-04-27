#include<stdio.h>

#define COLS 5

void user_input(double [][COLS], int row);
double ave_row(double [], int row);
double ave_all(double [][COLS], int row);
double max(double [][COLS], int row);
void show(double arr[], int n, double ave_all, double max);


int main(void)
{
	double arr[3][COLS];
	double all, m;
	double ave[3];
	int i, j;

	user_input(arr, 3);
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			printf("%.4lf  ", arr[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < 3; i++)
	{
		ave[i] = ave_row(arr[i], 5);
	}
	all = ave_all(arr, 3);
	m = max(arr, 3);
	show(ave, 3, all, m);

	return 0;
}


void user_input(double arr[][COLS], int row)
{
	int i, j;

	printf("Please input 15 numbers:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			scanf("%lf", *(arr + i) + j);
		}
	}
}

double ave_row(double arr[], int n)
{
	int i;
	double sum;

	sum = 0;
	for(i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}

	return (sum / (n * 1.0));
}

double ave_all(double arr[][COLS],int row)
{
	int i, j;
	double sum;
	
	sum = 0;
	for(i = 0; i < row;i++)
	{
		for(j = 0; j < COLS; j++)
		{
			sum = sum + arr[i][j];
		}
	}

	return (sum / (i * j));
}

double max(double arr[][COLS], int cow)
{
	int i, j;
	double max;

	max = arr[0][0];
	for(i = 0; i < cow; i++)
	{
		for(j = 0; j < COLS;j++)
		{
			if(arr[i][j] > max)
				max = arr[i][j];
		}
	}

	return max;
}

void show(double arr[], int n, double ave_all, double max)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("cow%d: %.3lf\n", i + 1, arr[i]);
	}
	printf("ave_all:%.3lf\n", ave_all);
	printf("max:%.3lf\n", max);
}
