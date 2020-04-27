#include<stdio.h>
int main(void)
{
	double sum = 1000000;
	int y = 0;

	do
	{
		sum += sum * 0.08;
		if(sum >= 100000)
		{
			sum -= 100000;
			y++;
		}
		else
			break;
	}while(sum > 0);
	printf("year:%d, money:%lf\n",y, sum);

	return 0;
}
