#include<stdio.h>
int main(void)
{
	int num;
	/*
 	 *
 	 * 跳过输入到达第一个非空白、非数字的位置
 	 *
 	 */
	while(scanf("%d",&num) == 1)
		;

	return 0;
}
