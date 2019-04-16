/*
Name: Keenan Turley
Date (YMD): 2019-01-15

Practice Problem 6.2:
    Write a program that prompts the user to enter two points on the Cartesian plane
    with different x coordinates and calculate and output the slope between the two
    points.

    You may assume that the two points entered have different x coordinates.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Declare doubles for given points
    double x1, y1, x2, y2;

    // Notify user of what they need to input
    printf("Enter values for x1, y1, x2, and y2 (must be different x coordinates\n");

    // Take input of each value
    printf("x1: ");
    scanf("%lf", &x1);

    printf("y1: ");
    scanf("%lf", &y1);

    printf("x2: ");
    scanf("%lf", &x2);

    printf("y2: ");
    scanf("%lf", &y2);

    // Calculate slope and print to user
    // Slope formula:
    // m = (y2-y1)/(x2-x1)
    double slope = (y2 - y1) / (x2 - x1);
    printf("Slope: %lf\n", slope);

    return 0;
}
