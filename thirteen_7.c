#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{
    int ch1, ch2;
    FILE * f1;
    FILE * f2;
    //char temp1[256];
    //char temp2[256];


    if(argc < 3)
    {
        printf("Usage: %s filename1 filename2\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((f1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if((f2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
/*
    //while((ch1 = getc(f1)) != EOF || (ch2 = getc(f2)) != EOF)
    while(fscanf(f1, "%s", temp1) == 1 || fscanf(f2, "%s", temp2) == 1)
    {
        //fscanf(f1, "%s", temp1);
        fprintf(stdout, "%s", temp1);
        //fscanf(f2, "%s", temp2);
        fprintf(stdout, "%s", temp2);

    } 
*/
    ch1 = getc(f1);
    ch2 = getc(f2);

    while(ch1 != EOF || ch2 != EOF)
    {
        while(ch1 != EOF && ch1 != '\n')
        {
            putchar(ch1);
            ch1 = getc(f1);
        }

        

        if(ch1 != EOF)
        {
            //putchar('\n');
            if (ch2 == EOF)
                putchar('\n');
            else
                putchar(' ');
            ch1 = getc(f1);
        }

        while(ch2 != EOF && ch2 != '\n')
        {
            putchar(ch2);
            ch2 = getc(f2);
        }

        

        if(ch2 != EOF)
        {
            putchar('\n');
            ch2 = getc(f2);
        }
    }

    if(fclose(f1) != 0)
        printf("Couldn't close %s\n", argv[1]);
    if(fclose(f2) != 0)
        printf("Couldn't close %s\n", argv[2]);


    return 0;
}