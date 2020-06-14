#include <stdio.h>
int main(void)
{
	int guess = 1;
	int h = 100;
	int s = 1;
	char ch;
	
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);
	while(getchar() != 'y')
	{
		ch = getchar();         //读走了回车键
		printf("big or small?\n");
		ch = getchar();
		if(ch == 'b')
			h = guess;
		if(ch == 's')
			s = guess;
		ch = getchar();         //读走了回车键
		guess = (h + s) / 2;
		printf("Well, then, is it %d?\n", guess);
	}
	printf("I know I could do it!\n");

	return 0;
}
