#include <stdio.h>

int main(void)
{
    char * str;

    char s[80];

    str = s;

    printf("Please input a string:");
    scanf("%s", str);
    puts(str);

    return 0;
}