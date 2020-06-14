#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000
#define LEN 10

int main(void)
{
    int i, r;
    int num[LEN] = { 0 };

    srand((unsigned int) time(0)); //随机种子

    for(i = 0; i < MAX; i++)
    {
        r = rand() % 10 + 1;

        switch(r)
        {
            case 1:num[0]++;break;
            case 2:num[1]++;break;
            case 3:num[2]++;break;
            case 4:num[3]++;break;
            case 5:num[4]++;break;
            case 6:num[5]++;break;
            case 7:num[6]++;break;
            case 8:num[7]++;break;
            case 9:num[8]++;break;
            case 10:num[9]++;break;
        }
    }

    for(i = 0; i < LEN; i++)
    {
        printf("%d:  %d\% \n", i + 1, num[i] / 10);
    }

    return 0;
}