#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char * argv [])
{
    FILE * source_file;
    FILE * object_file;
    char ch;
    char file_name[80];

    printf("Please input a file name:");
    scanf("%s", file_name);

    if((source_file = fopen(file_name, "a+")) == NULL || (object_file = fopen(file_name, "a+")) == NULL)
    {
        printf("Can't open %s \n", file_name);
        exit(EXIT_FAILURE);
    }

    while((ch = getc(source_file)) != EOF)
    {
        putc(toupper(ch), object_file);
    }

    fclose(source_file);
    fclose(object_file);

    return 0;
}