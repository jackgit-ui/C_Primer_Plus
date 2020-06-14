#include <stdio.h>
#include <ctype.h>

#define LEN 80

int main(void)
{
    int word, big, small, sign, number;
    int i = 0;
    char input[LEN] = {};

    word = big = small = sign = number = 0;
    printf("Please input a string.\n");
    //scanf("%s", input);
    gets(input);
    printf("%s\n", input);

    while(input[i])
    {
        if(isspace(input[i]))
            word++;
        else if(isupper(input[i]))
            big++;
        else if(islower(input[i]))
            small++;
        else if(ispunct(input[i]))
            sign++;
        else if(isdigit(input[i]))
            number++;
        i++;
    }

    printf("word:%d\nbig:%d\nsmall:%d\nsign:%d\nnumber:%d\n", word + 1, big, small, sign, number);


    return 0;
}