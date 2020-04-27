#include<stdio.h>

int sum(int ar[], int n);
int main(void)
{
	int ar[] = {9,2,0,4,5};
	int *p;
	int n = 8;
	//p = &n;
	printf("%d\n", p[0]);	
	printf("%d\n", p[1]);	
	printf("%d\n", p[4]);	
	//sum(p,5);
	return 0;
}

int sum(int *ar, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("%d ",ar[i]);
	printf("\nHello!\n");
}
