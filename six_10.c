#include<stdio.h>
int main(void)
{
	int up, down;
	int i, sum = 0;

	printf("Please input up and down:");
	while(scanf("%d %d", &down, &up) == 2)
	{
		sum = 0;
		if(up <= down)
		{
			printf("Done\n");
			break;
		}
		else
		{
			for(i = down; i <= up; i++)
			{
				sum += i * i;
			}
			printf("%d - %d double is %d\n", down, up, sum);
			printf("Please input another two number:");	
		}
	}

	return 0;
}
