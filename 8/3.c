/*
Name: Keenan Turley
Date (YMD): 2019-04-18

Practice Problem 8.3:
    Write a program to take in a positive integer n > 1 from the user and
    print out whether or not the number the number is a perfect number, an
    abundant number, or a deficient number.

    A perfect number is one where the sum of its proper divisors (the numbers
    that divide into it evenly not including itself) equals the number.

    An abundant number is one where this sum exceeds the number itself and a
    deficient number is one where this sum is less than the number itself.

    For example, 28 is perfect since 1 + 2 + 4 + 7 + 14 = 28, 12 is
    abundant because 1 + 2 + 3 + 4 + 6 = 16 and 16 is deficient
    because 1 + 2 + 4 + 8 = 15.
*/

#include <stdio.h>

int main(void)
{
    int n, i, sum;

    /* Get n */
    printf("Enter a positive integer greater than 1: ");
    scanf("%d", &n);

    /* Loop finding proper divisors and summing them */
    for (i = 1, sum = 0; i < n; ++i)
        if (n % i == 0)
            sum += i;

    /* Determine number type and output */
    if (sum == n)
        printf("%d is a perfect number! (sum = %d)\n", n, sum);
    else if (sum > n)
        printf("%d is an abundant number. (sum = %d)\n", n, sum);
    else
        printf("%d is a deficient number. (sum = %d)\n", n, sum);

    return 0;
}
