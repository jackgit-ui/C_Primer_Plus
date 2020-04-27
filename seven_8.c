#include<stdio.h>
#define TIME 40
//#define perbase 10.00
#define BASE 40 * perbase
#define BASETAX 300 * 0.15
#define TAX2 150 * 0.2


void getinfo(double time,double perbase);



int main(void)
{
	int select; //菜单选择
	double perbase;
	double time;

	while(1)
	{
		printf("****************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr\t\t 2) $9.33/hr\n");
		printf("3) $10.00/hr\t\t4) $11.20/hr\n");
		printf("5) quit\n");
		printf("****************************************************************\n");
		scanf("%d",&select);
label:		if(select == 5)
		{
			break;
		}
		else
		{
			switch(select)
				{
				case  1:perbase = 8.75;
				printf("Please  input your work time:");
				scanf("%lf",&time);
				getinfo(time,perbase);
				break;
			case  2:perbase = 9.33;break;
			case  3:perbase = 10.00;
				printf("Please  input your work time:");
				scanf("%lf",&time);
				getinfo(time,perbase);
				break;
			case  4:printf("4");break;
			default:printf("Please input right number!\n");
				scanf("%d",&select);
				goto label;
			}
		}
	}

	return 0;
}
void getinfo(double time,double perbase)
{
	double salary;
	double tax;
	/*
         *
         * 根据工作时间计算工资
         *
         */
	if(time < 40) //工作时间小于40小时
		salary = time * perbase;
	else//工作时候大于等于40小时
	{
		time = TIME + (time - TIME) * 1.5;
		salary = time * perbase;	
	}
	/*
 	 *
 	 * 计算税金
 	 *
 	 */
	if(salary < 300)
		tax = salary * 0.15;
	else if (salary < 450)
		tax = BASETAX + (salary - 300) * 0.2;
	else
		tax = BASETAX + TAX2 + (salary -450) * 0.25;
	printf("工资：%lf, 税金:%lf, 收入：%lf.\n",salary,tax,salary-tax);
}
