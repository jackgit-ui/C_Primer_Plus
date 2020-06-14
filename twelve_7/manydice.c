#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void)
{
    int dice, roll;
    int sides;
    int status;
    int sets;
    int i;

    srand((unsigned int) time(0));
    //printf("Enter the number of sides per die, 0 to stop.\n");
    printf("Enter the number of sets; enter q to stop:");
    while(scanf("%d", &sets) == 1 && sets != 'q')
    {
        /*
        printf("How many dice?\n");
        if((status = scanf("%d", &dice)) != 1)
        {
            if(status == EOF)
                break;
            else
            {
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while(getchar() != '\n')
                    continue;
                printf("How many sides? Enter 0 to stop.\n");
                continue;
            }

        }*/
        printf("How many sides and how many dice?");
        scanf("%d%d", &sides, &dice);
        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        for(i = 0; i < sets; i++)
        {
        roll = roll_n_dice(dice, sides);
        //printf("You have rolled a %d using %d %d-sided dice.\n",
                //roll, dice, sides);
            printf("%d ", roll);
        }
        //printf("How many sides? Enter 0 to stop.\n");
        printf("\n");
        printf("How many sets? Enter q to stop:");
    }
    //printf("The rollem() function was called %d times.\n", roll_count);
    //printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}