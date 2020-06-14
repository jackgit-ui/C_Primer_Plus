#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv [])
{
    FILE * fp;
    char str[255];


    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while(fgets(str, 255, fp) != NULL)
    {
        if(strstr(str, argv[1]))
            fputs(str, stdout);
    }

    fclose(fp);

    return 0;
}