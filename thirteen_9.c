#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(void)
{
    FILE *fp;
    char words[MAX];
    int num = 0;
    int ch;

    if((fp = fopen("wordy","a+")) == NULL)
    {
        fprintf(stdout, "Can't opne \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }

    while((ch = getc(fp)) != EOF)
    {
        if(ch == '\n')
            num++;
    }
    rewind(fp);

    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
        fprintf(fp, "%d:%s\n", ++num, words);
    puts("File contents:");
    rewind(fp);  //返回到文件开始出
    while(fscanf(fp, "%s", words) == 1)
        puts(words);
    puts("Done!");
    if(fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");

    return 0;

}