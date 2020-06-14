#include <stdio.h>
#include "pe12-3a.h"

void check_mode(int *pm)
{
    if(*pm != METRIC && *pm != US)
    {
        printf("Invalid mode specified. Mode %d\n", *pm);
        printf("Previous mode will be used.\n");
        *pm = USE_RECENT;
    }
}

void get_info(int mode, double * pd, double *pf)
{
    if(mode == METRIC)
    {
        printf("Enter distance traveled in kilometers:");
        scanf("%f", pd);
        printf("Enter fuel consumed in liters:");
        scanf("%f", pf);
    }
    else if(mode == 1)
    {
        printf("Enter distance traveled in miles:");
        scanf("%f", pd);
        printf("Enter fuel consumed in gallons:");
        scanf("%f", pf);
    }

}

void show_info(int mode, double distance, double fuel)
{
    double consump;

    if(mode == METRIC)
    {
        consump = fuel / ( distance / 100.0);
        printf("Fuel consumption is %.2f liters per 100 km.\n", consump);
    }
    else if(mode == US)
    {
        consump = distance / fuel * 1.0;
        printf("Fuel consumption is %.2f miles per gallon.\n", consump);
    }

}
/*
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
}*/