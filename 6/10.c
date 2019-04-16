/*
Name: Keenan Turley
Date (YMD): 2019-04-15

Practice Problem 6.10:
    Write a program that prompts the user to enter the coefficients a, b and c
    from the quadratic equation ax^2 + bx + c = 0, and calculates the two real
    roots of the equation.

    You may assume that the user enters values of a, b and c that lead to the
    equation having two distinct real roots, namely, the user will enter values
    such that b^2 > 4ac, and a will not equal 0.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float root1, root2;

    /* Get coefficients from user */
    printf("Enter the coefficients to your quadratic equation.\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    /* Use quadratic formula to calculate both roots */
    /* Formula: (-b (+,-) sqrt(b^2 - 4ac)) / 2a */
    root1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    root2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    /* Output roots */
    printf("Roots: %f, %f\n", root1, root2);

    return 0;
}
