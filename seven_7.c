#include<stdio.h>
#define TIME 40
#define PERBASE 10.00
#define BASE 40 * PERBASE
#define BASETAX 300 * 0.15
#define TAX2 150 * 0.2




int main(void)
{
	double time;//记录工作时间
	double salary;
	double tax;

	printf("Please  input your work time:",time);
	scanf("%lf",&time);
	/*
         *
         * 根据工作时间计算工资
         *
         */
	if(time < 40) //工作时间小于40小时
		salary = time * PERBASE;
	else//工作时候大于等于40小时
	{
		time = TIME + (time - TIME) * 1.5;
		salary = time * PERBASE;	
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

	return 0;
}
