#include<stdio.h>
int main(void)
{
	/*
 	 *
 	 *创建立方表
	 *
	 */
	int num;

	printf("n   n bubed\n");
	for(num = 1; num <= 6; num++)
	{
		printf("%-5d%5d\n",num, num*num*num);
	}

	return 0;
}
