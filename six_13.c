#include<stdio.h>
#define MAX 8
int main(void)
{
	int a[MAX];
	int i;

	for(i = 0; i < MAX; i++)
	{
		if(i == 0)
		{
			a[i] = 2;
		}
		else
		{
			a[i] = a[i-1] * 2;
		}
	}
	i = 0;
	do
	{
		printf("%d ",a[i]);
		i++;
	}while(i < MAX);
	printf("\n");
	
	return 0;
}
