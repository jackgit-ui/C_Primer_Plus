#include<stdio.h>

#define ROW 3
#define COLS 5

void doub(int [][COLS], int);
void show(int [][COLS], int);
int main(void)
{
	int arr[ROW][COLS] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};

	show(arr, ROW);
	doub(arr, ROW);
	show(arr, ROW);
	
	return 0;	
}

void doub(int arr[][COLS], int cow)
{
	int i, j;

	for(i = 0; i < cow; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			arr[i][j] = arr[i][j] * 2;
		}
	}
}

void show(int arr[][COLS], int cow)
{
	int i, j;

	for(i = 0; i < cow; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
}
