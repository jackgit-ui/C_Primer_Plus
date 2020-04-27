#include<stdio.h>
int main(void)
{
	double sum1 = 100;
	double sum2 = 100;
	int i = 0;
	do
	{
		sum1 += 100 * 0.1;
		sum2 += sum2 * 0.05;
		i++;
	}while(sum2 <= sum1);
	printf("%d:%.3lf %.3lf\n",i, sum1, sum2);

	return 0;
}
