#include <stdio.h>
#include "pe12-2a.h"

void get_info(void)
{
    if(mode == 0)
    {
        printf("Enter distance traveled in kilometers:");
        scanf("%f", &distance);
        printf("Enter fuel consumed in liters:");
        scanf("%f", &fuel);
    }
    else if(mode == 1)
    {
        printf("Enter distance traveled in miles:");
        scanf("%f", &distance);
        printf("Enter fuel consumed in gallons:");
        scanf("%f", &fuel);
    }

}

void show_info(void)
{
    float consump;

    if(mode == 0)
    {
        consump = fuel / ( distance / 100.0);
        printf("Fuel consumption is %.2f liters per 100 km.\n", consump);
    }
    else if(mode == 1)
    {
        consump = distance / fuel * 1.0;
        printf("Fuel consumption is %.2f miles per gallon.\n", consump);
    }

}

void set_mode(int m)
{
    if(m != 0 && m != 1)
    {
        if(mode == 1)
            printf("Invalid mode specified. Mode %d (US) used.\n", mode);
        else if(mode == 0)
            printf("Invalid mode specified. Mode %d (UK) used.\n", mode);
    }
    else
        mode = m;
}