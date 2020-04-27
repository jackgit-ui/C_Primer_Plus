#include<stdio.h>
int main(void)
{
	float a, b;
	
	printf("Please input two float numbers:");
	while(scanf("%f %f",&a, &b) == 2)
	{
		printf("%f\n",(a - b) / (a * b));
	}

	return 0;	
}
