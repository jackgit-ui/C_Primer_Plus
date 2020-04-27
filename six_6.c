#include<stdio.h>
int main(void)
{
	int up, down;
	int i;

	printf("Please input up and down:");
	scanf("%d%d", &up, &down);
	for(i = up; i <= down; i++)
	{
		printf("%d %d %d",i, i*i, i*i*i);
		printf("\n");
	}

	return 0;
}
