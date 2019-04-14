/*
Name: Keenan Turley
Date (YMD): 2019-01-14

Practice Problem 6.1:
    Write a program that prompts the user for the area of a circle and 
    calculates the radius of that circle and prints it out.
*/

#include <stdio.h>
#include <math.h>

int main() 
{
    // Define area variable to hold input
    float area;

    // Promp for area
    printf("Area of circle: ");
    scanf("%f", &area);

    // calculate radius
    // area of circle (A) = (PI)*(r^2)
    // so r = sqrt(A / (PI))
    double radius = sqrt(area / M_PI);

    // Print radius
    printf("Radius: %lf\n", radius);
}