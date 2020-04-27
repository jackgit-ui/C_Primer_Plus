#include<stdio.h>
int main(void)
{
	int n = 0;

	while(getchar() != EOF)
		n++;
	printf("chars:%d\n", n);

	return 0;
}
