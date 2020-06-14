#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Programming Exercise 13-12 */
#include <stdio.h>
#include <stdlib.h>
#define ROWS 20
#define COLS 30
#define LEVELS 10

const char trans[LEVELS + 1] = " .':~*=&%@";
void MakePic(int data[][COLS], char pic[][COLS], int rows);
void init(char arr[][COLS], char ch);

int main()
{
    int row, col;
    int picIn[ROWS][COLS];
    char picOut[ROWS][COLS];
    char fileName[81];
    FILE * infile;
    
    init(picOut, 'S');
    
    printf("Enter name of file: ");
    scanf("%80s", fileName);
    if ((infile = fopen(fileName, "r")) == NULL)
    {
        fprintf(stderr, "Could not open data file.\n");
        exit(EXIT_FAILURE);
    }
    
    for (row = 0; row < ROWS; row++)
        for (col = 0; col < COLS; col++)
            fscanf(infile, "%d", &picIn[row][col]);

    if (ferror(infile))
    {
        fprintf(stderr, "Error getting data from file.\n");
        exit(EXIT_FAILURE);
    }

    MakePic(picIn, picOut, ROWS);

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
            putchar(picOut[row][col]);
        putchar('\n');
    }
    //rewind(infile);
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
            {
               
                //fprintf(infile, "%c", picOut[row][col]);
                putc(picOut[row][col], infile);
                
            }
        putc('\n', infile);
    }
            

    return 0;
}
void init(char arr[][COLS], char ch)
{
 int r, c;
 for (r = 0; r < ROWS; r++)
    for (c = 0; c < COLS; c++)
        arr[r][c] = ch;
}
void MakePic(int data[][COLS], char pic[][COLS], int rows)
{
    int row, col;
    for (row = 0; row < rows; row++)
        for (col = 0; col < COLS; col++)
            pic[row][col] = trans[data[row][col]];
}




/*
#define ROW 20
#define COL 30

int main(int argc, char * argv [])
{
    int pic[ROW][COL];
    char translate[ROW][COL + 1];
    char num;
    int * p = &pic[0][0];
    char * s;
    FILE * fp;
    FILE * fp2;
    int i, j;
    char ch[80] = "hhh";

    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if((fp2 = fopen(argv[2], "w")) == NULL)
    {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }


    while((num = getc(fp)) != EOF)
    {
        if(num >= '0' && num <= '9')
        {
            *p++ = (int)num - 48;  
        }
    }

    for(i = 0; i < ROW; i++)
    {
        static int count = 1;
        for(j = 0; j < COL; j++)
        {
            
            //itoa(pic[i][j] + 32, ch, 10);
            //sprintf(ch,"%d", pic[i][j]);

            //fputs((char)pic[i][j],fp2);
            

            //printf("%d", pic[i][j]);
            if(count % 30 == 0)
                //printf("\n");
                fputs("\'\n\'", fp2);

            count++;

        }
            
    }
}
*/