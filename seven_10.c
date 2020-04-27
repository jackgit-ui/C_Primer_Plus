#include<stdio.h>
#define SINGLE 17850
#define DOUBLE 23900
#define TOGETHER 29750
#define OPEN 14875
#define RATE1 0.15
#define RATE2 0.28 
int main(void)
{
	int start;
	int env;
	double salary;
	double tax;

	while(1)
	{
label:		printf("*************************************************\n");
		printf("What is your env:\n");
		printf("1)single\t\t2)DOUBLE\t\t\n3)together\t\t4)open\t\t\n5)quit\n");
		printf("*************************************************\n");
		scanf("%d", &env);
		if(env == 5)
			break;
		else
		{
		switch(env)
		{
			case 1:start = SINGLE;break;
			case 2:start = DOUBLE;break;
			case 3:start = TOGETHER;break;
			case 4:start = OPEN;break;
			default:printf("number error!");goto label;
		}
		printf("Please input your salary:");
		scanf("%lf",&salary);
		if(salary >= start)
			tax = start * RATE1 * 1.0 + (salary -start) * RATE2 * 1.0;
		else
			tax = 0;
		printf("tax:%lf\n",tax);
		}
			
	}

	return 0;
}
