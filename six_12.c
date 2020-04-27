#include<stdio.h>
int main(void)
{
	int i, n;
	double sum1 = 0;
	double sum2 = 0;
	int s = -1;
	
	printf("Please input a number:");
	while(scanf("%d", &n)== 1)
	{
		if(n == 0 || n < 0)
		{
			break;
		}
		else
		{
			for(sum1 = sum2 = 0,i = 1; i <= n; i++)
			{
				sum1 += 1.0 / i;
				s *= -1;
				sum2 += 1.0 / (i * s);
			}
			printf("sum1 = %lf ", sum1);
			printf("sum2 = %lf\n", sum2);
			printf("Please input other number:");
			
		}
		
	}

	return 0;
}
