#include <stdio.h>

extern unsigned int rand0(void);
extern void srand1(unsigned int x);

int main(void)
{
    int count;
    unsigned seed;
    printf("Please enter your choice for seed.\n");
    while(scanf("%u", &seed) == 1)
    {
        srand1(seed); /*重置种子*/
        for(count = 0; count < 5; count++)
        {
            printf("%d\n", rand0());
        }
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done\n");
    
    return 0;
}