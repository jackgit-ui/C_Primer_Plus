#include <stdio.h>
#include <ctype.h>

int main(int argc, int *argv [])
{
    char ch, temp;
    int i;

    if(argc > 2)
        printf("argc too many!\n");
/*
    for(i = 1; i < argc - 1; i++)
    {
        if(strcmp(*argv[i], "-p") && strcmp(*argv[i], "-u") && strcmp(*argv[i], "-l"))
        {
            printf("argv error!\n");
            return 0;
        }    
    }
*/  
    if(argc == 1 || (argc == 2 && !strcmp(argv[1], "-p")))
    {
        while((ch = getchar()) != EOF)
            putchar(ch);
    }

    if(!strcmp(argv[1], "-u"))
    {
        while((ch = getchar()) != EOF)
        {
            temp = toupper(ch);
            putchar(temp);
        }    
    }

    if(!strcmp(argv[1], "-l"))
    {
        while((ch = getchar()) != EOF)
        {
            temp = tolower(ch);
            putchar(temp);
        }    
    }

    return 0;    
}