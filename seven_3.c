#include<stdio.h>
int main(void)
{
	int n1, sum1, n2, sum2;
	int n;
	n1 = n2 = sum1 = sum2 = 0;

	scanf("%d", &n);
	while(n != 0)
	{
		if(n % 2 == 0)
		{
			n1++;
			sum1 += n;
		}
		else
		{
			n2++;
			sum2 += n;
		}
		scanf("%d", &n);
	}
	if( n1 > 0)
		printf("偶数：%d 平均值：%f\n", n1, sum1 * 1.0 / n1);
	if(n2 > 0)
		printf("奇数：%d 平均值：%f\n", n2, sum2 * 1.0 / n2);

	return 0;
}
