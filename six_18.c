#include<stdio.h>
int main(void)
{
	const int dunbar = 150;
	int friends;
	int weeks;
	
	for(weeks = 1, friends = 5; friends < dunbar; weeks++)
	{
		friends = (friends - weeks) * 2;
		printf("wenks:%d friends:%d\n", weeks, friends);
	}

	return 0;
}

