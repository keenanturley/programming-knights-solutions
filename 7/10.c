/*
Name: Keenan Turley
Date (YMD): 2019-04-18

Practice Problem 7.10:
    Write a program that determines whether or not Anna and Bob were at the
    restaurant at the same time.

    Ask the user when Anna and Bob arrived at and left the restaurant,
    respectively.

    (The user should answer in number of minutes after midnight, and assume
    that both arrived and left on the same day.)

    Determine whether or not Anna and Bob were at the restaurant at the same
    time, and if so, for how many minutes they overlapped.

    For example, if Anna arrived at 720 minutes after midnight and left 800
    minutes after midnight and Bob arrived at 600 minutes after midnight and
    left 740 minutes after midnight, they were at the restaurant together for
    20 minutes.

    (Note: If Bob leaves at the same time Anna arrives, then they were not at
    the restaurant at the same time.)
*/

#include <stdio.h>

int main(void)
{
    int anna_arrive, anna_leave;
    int bob_arrive, bob_leave;
    int were_both_there = 0, time_overlapped;

    /* Ask user when Anna and Bob arrived and left the restaurant */
    printf("Were Anna and Bob at the restaurant at the same time?\n\n");
    printf("Enter time in whole minutes after midnight.\n");

    printf("Anna arrived: ");
    scanf("%d", &anna_arrive);
    printf("Anna left: ");
    scanf("%d", &anna_leave);

    printf("Bob arrived: ");
    scanf("%d", &bob_arrive);
    printf("Bob left: ");
    scanf("%d", &bob_leave);

    /* Check if both were at the restaurant at the same time */
    /* Bob arrived before Anna */
    if (bob_arrive < anna_arrive)
    {
        /* And Bob left after Anna arrived */
        if (bob_leave > anna_arrive)
        {
            were_both_there = 1;
            time_overlapped = bob_leave - anna_arrive;
        }
        /* And Bob left after Anna left */
        else if (bob_leave > anna_leave)
        {
            were_both_there = 1;
            time_overlapped = bob_leave - anna_leave;
        }
    }
    /* Anna arrived before Bob */
    else if (anna_arrive < bob_arrive)
    {
        /* And Anna left after Bob arrived */
        if (anna_leave > bob_arrive)
        {
            were_both_there = 1;
            time_overlapped = anna_leave - bob_arrive;
        }
        /* And Anna left after Bob left */
        else if (anna_leave > bob_leave)
        {
            were_both_there = 1;
            time_overlapped = anna_leave - bob_leave;
        }
    }

    /* If there were both there, print out the amount of overlapping time */
    if (were_both_there)
    {
        printf("Anna and Bob were at the restaurant a the same time.\n");
        printf("The overlapping time was %d minutes.\n", time_overlapped);
    }
    else
    {
        printf("Anna and Bob were not at the restaurant at the same time.\n");
    }

    return 0;
}
