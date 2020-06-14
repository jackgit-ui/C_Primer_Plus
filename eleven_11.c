#include <stdio.h>
#include <string.h>

int main(void)
{
	int choice;
	int i;
	char* strs[10];
	char  str[40];
	printf("%p %p\n", strs[0], strs[1]);
	printf("Please input 10 strings.\n");
	scanf("%s", str);
	/*for(i = 0; i < 10 && str != NULL; i++)
	{
		strs[i] = str;
		scanf("%s", str);
	}*/
	strs[0] = str;
	scanf("%s", str);
	strs[1] = str;
	printf("%s\n", strs[0]);
	printf("%s\n", strs[1]);
	/*printf("Please make your choice:\n");
	printf("%-40s  %-40s\n","1)print string.","2)print string as ASCII.");
	printf("%-40s  %-40s\n","3)print string as length.","4)print string as the first char ASCII.");
	printf("5)quit.\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("%s\n", strs[0]);
			break;
		case 2:
			printf("%s\n", strs[1]);
			break;
		case 3:
			printf("%s\n", strs[2]);
			break;
		case 4:
			printf("%d\n", 4);
			break;
		case 5:
			printf("%d\n", 5);
			break;
	}*/
}
