#include <stdio.h>
#include <ctype.h>

int my_atoi(char *str)
{
    int m, n;
    int i;
    
    if(!isdigit(str[0]))
        return 0;

    n = str[0] - 48;
    i = 1;
    while(isdigit(str[i]))
    {
        m = str[i] - 48;
        n = n * 10 + m;
        i++;
    }
    return n;
}

  
int main()
{
    char str[100] = {0};
    scanf("%s",str);
    int k = my_atoi(str);
    printf("%d\n",k);
    return 0;
}


 