/*
Name: Keenan Turley
Date (YMD): 2019-04-18

Practice Problem 8.1:
    Write a program that asks the user for a positive even integer input n, and
    the outputs the sum 2+4+6+8+...+n, the sum of all the positive even
    integers up to n.
*/

#include <stdio.h>

int main(void)
{
    int n, i, result = 0;

    /* Ask user for number (n) */
    printf("Enter a positive even integer: ");
    scanf("%d", &n);

    /* Sum even numbers up to n */
    for (i = 2; i <= n; i += 2)
        result += i;

    /* Output result */
    printf("Result: %d\n", result);

    return 0;
}
