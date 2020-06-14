#include <stdio.h>

int func();

int main(void)
{
    int n;
    int sub_n;
    int i;
    printf("Please input your numbers:");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("%d ", func());
    }
    printf("\n");

    return 0;
}

int func()
{
    static int n = 0;
    n++;

    return n;
}

