#include<stdio.h>


void copy(int, int, double source[m][n],double target[m][n]);
void show(int, int, double arr[m][n]);

int main(void)
{
	int m, n;

	m = 3;
	n = 5;
	double source[m][n] = {{1, 2, 3, 4, 5},{2, 4, 6, 8, 10},{1, 1, 1, 1, 1}};
	double arr[m][n];

	show(m, n,source[m][n]);
	copy(m, n,source[m][n],arr[m][n]);
	show(m, n,arr[m][n]);

	return 0;
	
}

void copy(int m, int n, double source[m][n],double target[m][n])
{
	int i, j;

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			target[i][j] = source[i][j];
		}
	}
}

void show(int m, int n, double arr[m][n])
{

	int i, j;

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%.4lf ",arr[i][j]);
		}
		printf("\n");

	}

}
