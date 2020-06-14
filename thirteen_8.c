#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{
    FILE * fp;
    int count = 0;
    int ch;

    if(argc == 2)
        fp = stdin;
    else if(argc == 3)
    {
        if((fp = fopen(argv[2], "r")) == NULL)
        {
            printf("Can't open %s\n", argv[2]);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        printf("Usage: %s char file", argv[0]);
    }

    ch = getc(fp);

    while(ch != EOF)
    {
        if(ch == *argv[1])
            count++;
        ch = getc(fp);
    }

    printf("file %s include %d %c\n", argv[2], count, *argv[1]);

    if(fclose(fp) != 0)
        printf("Couldn't close %s\n", argv[2]);

    
    return 0;


}