#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

int main(int argc, char *argv [])
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;
    char in_file[40], out_file[40];

    /*
    if ( argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    */

    printf("Please input in file:");
    scanf("%s", in_file);
    if((in = fopen(in_file, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%\"\n", in_file);
        exit(EXIT_FAILURE);
    }

    strncpy(name, in_file, LEN - 5);
    name[LEN -5] = '\0';
    strcat(name, ".red");

    if((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }

    while((ch = getc(in)) != EOF)
        if(count++ % 3 == 0)
            putc(ch, out);

    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Enter in closing files\n");

    return 0;
}