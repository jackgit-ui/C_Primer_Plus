#include<stdio.h>
#define SIZE 4
int main(void)
{
	//int some_data[SIZE]= {[1]= 20};
	int some_data[]= {[2]= 20, 30, 40};
	int i;

	printf("%2s%14s\n", "i", "some_data[i]");
	//for(i = 0; i < SIZE; i++)
	for(i = 0; i < 5; i++)
	{
		printf("%2d%14d\n", i, some_data[i]);
	}
	//printf("%d\n", sizeof some_data);
	
	return 0;
}
