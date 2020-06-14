#include <stdio.h>

int daisy;

int main(void)
{
	daisy = 1;
	printf("%d \n", daisy);	
	petal();

	return 0;
}

int petal()
{
	daisy = 2;
	printf("%d \n", daisy);

	return 0;
}
