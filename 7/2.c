/*
Name: Keenan Turley
Date (YMD): 2019-04-15

Practice Problem 7.2:
    Debbie likes numbers that have the same tens digit and units digit.

    For example, Debbie likes 133 and 812355, but she does not like 137 or 4.

    Write a program that asks the user for a number and then prints out whether
    or not Debbie likes the number.

Personal Note:
    It seems Debbie likes numbers that conform to the equation:
    (x % 100) % 11 = 0
*/

#include <stdio.h>

int main(void)
{
    int num;

    /* Get number from user */
    printf("Enter a number: ");
    scanf("%d", &num);

    /* Test is Debbie likes the number */
    if (((num % 100) % 11) == 0)
    {
        /* Tell the user Debbie likes their number */
        printf("Debbie likes the number %d!\n", num);
    }
    else
    {
        /* Tell the user that Debbie doesn't like their number */
        printf("Debbie does not like the number %d\n", num);
    }

    return 0;
}
