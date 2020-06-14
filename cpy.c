#include<stdio.h>

char * cpy(char * a, char * b)
{
	while(*a != '\0')
		*a++ = *b++;
	*a = '\0';
	
	return a;
}

int main(void)
{
	char * a = "good";
	char * b = "bad";
	int i;

	for(i = 0; i < 3; i++)
	/*	a[i] = b[i];
	a[i] = '\0';*/
		*a++ = *b++;
	*a = '\0';
	/*while(*a != '\0')
		*a++ = *b++;
	*a = '\0';*/
	printf("%s %s\n", a, b);
	//printf("%s\n", cpy(a, b));

	return 0;
}
