#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    char file_name[80];
    FILE * fp;
    unsigned long count = 0;
    printf("Please input a file name:");
    scanf("%s", file_name);

    if((fp = fopen(file_name, "r")) == NULL)
    {
        printf("Can't open %s\n", file_name);
        exit(EXIT_FAILURE);
    }

    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }

    fclose(fp);

    printf("File %s has %lu characters\n", file_name, count);

    return 0;


}