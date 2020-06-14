#include <stdio.h>
#include <stdlib.h>

void print_file(FILE * fp);

int main(int argc, char * argv [])
{
    FILE * fp;
    int i;

    for(i = 1; i <= argc - 1; i++)
    {
        if((fp = fopen(argv[i], "r")) == NULL)
        {
            printf("Can't open %s \n", argv[i]);
            exit(EXIT_FAILURE);
        }

        print_file(fp);
        //printf("\n");
    }

    return 0;
}

void print_file(FILE * fp)
{
    char ch;

    while((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
}