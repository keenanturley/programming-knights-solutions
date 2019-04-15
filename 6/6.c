/*
Name: Keenan Turley
Date (YMD): 2019-04-15

Practice Problem 6.6:
    Imagine a two-way straight railway and two trains approaching each other 
    from opposite directions. 
    
    You need to compute how long (in minutes) would it take for these trains 
    to come side by side. 
    
    You will also compute how many miles each train travels till then.
    
    Write a program to read in the distance (in miles), speeds of the trains 
    (in miles per hour), and output the time to meet (in minutes) and the 
    distance traveled by each train (in miles). 
*/

#include <stdio.h>

int main(void)
{
    float distance_between; 
    float speed1, speed2, distance1, distance2;
    float time_to_meet;

    /* Get distance between trains */
    printf("Distance between trains (miles): ");
    scanf("%f", &distance_between);

    /* Get speed both trains */
    printf("Speed of Train 1 (mph): ");
    scanf("%f", &speed1);
    printf("Speed of Train 2 (mph): ");
    scanf("%f", &speed2);

    /* Calculate minutes intil trains meet: (distance / velocity) * 60 */
    time_to_meet = (distance_between / (speed1 + speed2)) * 60;

    /* Calculate distance traveled by both trains */
    distance1 = (time_to_meet / 60) * speed1;
    distance2 = (time_to_meet / 60) * speed2;

    /* Output time to meet and distances traveled */
    printf("Time to meet: %.2f minutes\n", time_to_meet);
    printf("Distance traveled:\n");
    printf("Train 1: %.2f, Train 2: %.2f\n", distance1, distance2);

    return 0;
}