#include<stdio.h>
int main(void)
{
	/*
 	 *
 	 * 将非0数赋值给布尔类型变量，自动改为1。
 	 *
 	 */

	_Bool n;

	n = 10;
	printf("%d\n",n);
	n = 20;
	printf("%d\n",n);

	return 0;
}
