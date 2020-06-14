#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{
    FILE * fp;
    char file_name[80];
    int location;
    char ch;

    printf("Please input the file name that you want to open:");
    scanf("%s", file_name);
    if((fp = fopen(file_name, "r")) == NULL)
    {
        printf("Can't open %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    printf("Please input the location:");
    while(scanf("%d", &location) == 1 && location > 0)
    {
        fseek(fp, location, SEEK_SET);
        /*
        while((ch = getc(fp)) != '\n')
        {
            putchar(ch);
            
        }
        */
        ch = getc(fp);
        while(ch != '\n')
        {
            putchar(ch);
            ch = getc(fp);
        }
            
        printf("\n");

        printf("Please input other location:");
    }

    return 0;
}
