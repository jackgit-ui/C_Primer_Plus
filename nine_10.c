#include<stdio.h>

void to_base_n(unsigned long n, int m)
{
	int r;
	
	r = n % m;
	if(n >= m)
		to_base_n(n / m, m);
	//putchar(r == 0 ? '0' : '1');
	//printf("%d", r);
	putchar('0' + r);

	return;
}

int main(void)
{
	unsigned long n;
	int m;

	printf("Please input number and to.\n");
	while(scanf("%ld%d", &n, &m) == 2)
	{
		to_base_n(n,m);
		printf("\n");
		printf("again:\n");
	}

	return 0;
}
