#include<stdio.h>
int main(void)
{
	int n;

	if(scanf("%d",&n) == 1)
		goto label;
	printf("%d", 2);
	printf("%d", 3);
	label:printf("%d",1);
	printf("%d", 4);

	return 0;
}
