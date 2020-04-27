#include<stdio.h>
int main(void)
{
	char choice;
	int weight, sum = 0;

	printf("************************\n");
	printf("What do you want to buy?\n");
	printf("a)jb\t\tb)sb\t\t\nc)bigsb\t\tq)exit\n");
	while(1)
	{
		choice = getchar();
		if(choice == 'q')
			break;
		else
		{
		switch(choice)
		{
		case 'a':
			printf("How many?\n");
			scanf("%d", &weight);
			sum += weight;
			break;
		case 'b':
		case 'c':
		default :printf("No this vegetalb!sb\n");
		}
		}
		printf("************************\n");
		printf("What do you want to buy?\n");
		printf("a)jb\t\tb)sb\t\t\nc)bigsb\t\tq)exit\n");
		while(getchar() == 1)
		{
			continue;
		}	
	}
	printf("%d\n",sum);

	return 0;	
}
