#include<stdio.h>
long get_long(void);
int main(void)
{
	printf("main:%ld\n", get_long());

	return 0;
}
long get_long(void)
{
	long input;
	char ch;

	while (scanf("%ld", &input) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\nPlease enter an ");
		printf("integer value, such as 25, -178, or 3: ");
	}
	return input;
}
