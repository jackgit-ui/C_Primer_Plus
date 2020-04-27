#include<stdio.h>
int da(int [][8]);
int db(int *);
int dc(int (*)[4]);
int main(void)
{
	int zippo[4][2] = {{2,4}, {6,8}};

	printf("%d %d\n", *(*zippo + 1),*(zippo[0] + 1));

	return 0;
}
