#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{
    FILE * source_file;
    FILE * object_file;
    char ch;

    if((source_file = fopen(argv[1], "r")) == NULL || (object_file = fopen(argv[2], "w")) == NULL)
    {
        printf("Can't open %s or %s\n", source_file, object_file);
        exit(EXIT_FAILURE);
    }

    while((ch = getc(source_file)) != EOF)
    {
        putc(ch, object_file);
    }

    fclose(source_file);
    fclose(object_file);

    return 0;
}