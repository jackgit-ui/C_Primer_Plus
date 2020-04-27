#include<stdio.h>
float cal(float a, float b);
int main(void)
{
	float a, b;
	
	printf("Please input two float numbers:");
	while(scanf("%f %f",&a, &b) == 2)
	{
		printf("%f\n",cal(a,b));
	}

	return 0;	
}

float cal(float a, float b)
{
	return (a - b) / (a * b);
}
