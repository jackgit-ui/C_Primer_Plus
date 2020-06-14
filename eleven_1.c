#include<stdio.h>
void getstr(char str[], int n);

int main(void)
{
	char str[45];
	int n;
	
	printf("How many al do you want to input?(< 45)");
	scanf("%d", &n);
	getchar();
	getstr(str, n);
	puts(str);
	
	return 0;
}

void getstr(char str[], int n)
{
	int i;

	for(i = 0; i < n; i++ ){
		scanf("%c", &str[i]);
	}
	str[i] = '\0';
	
}
