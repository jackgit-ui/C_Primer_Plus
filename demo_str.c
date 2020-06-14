#include <stdio.h>

int main(void)
{
	char *str;

	str = "hello world";
	puts(str);
	putchar(*(str + 1));
	putchar(str[1]);

	return 0;
}
