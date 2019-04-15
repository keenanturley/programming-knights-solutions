/*
Name: Keenan Turley
Date (YMD): 2019-04-15

Practice Problem 6.9:
    Research how electoral votes are calculated, look up the most current 
    census numbers and use this to write an electoral vote calculator. 
    
    Your calculator should ask the user for the population of their state and 
    output the number of electoral votes that state should receive. 
    
    Since there are some slight exceptions in the actual process, compared to 
    the straight mathematical theory behind it, your program will occasionally 
    be off by 1 electoral vote compared to the actual allocation.
*/

#include <stdio.h>
#include <math.h>

/* 2018 Population */
#define US_POP_IN_MILLIONS 327.2
#define NUM_REPRESENTATIVES 435
#define SENATORS_PER_STATE 2

int main(void)
{
    float population;
    int electoral_votes;

    /* Ask user for state population */
    printf("Population of state (in millions): ");
    scanf("%f", &population);

    /* Calculate amount of electoral votes */
    /* NOTE: Seems to be more accrate rounding instead of truncating to int */
    electoral_votes = round((population / US_POP_IN_MILLIONS) * 
                      NUM_REPRESENTATIVES) + SENATORS_PER_STATE;

    /* Print out number of electoral votes */
    printf("Electoral votes: %d\n", electoral_votes);

    return 0;
}