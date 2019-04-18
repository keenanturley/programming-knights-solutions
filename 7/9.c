/*
Name: Keenan Turley
Date (YMD): 2019-04-17

Practice Problem 7.9:
    On planet C, leap years occur on every year divisible by 7, except for
    years that are divisible by either 35 or 77.

    (Thus, the first ten leap years after 0 on planet C are:
    7, 14, 21, 28, 42, 49, 56, 63, 84 and 91.)

    Write a program that prompts the user to enter a year (positive integer)
    and prints out whether or not this year is a leap year on planet C.

*/

#include <stdio.h>

int main(void)
{
    int given_year, is_leap_year = 0;

    /* Ask user for year to test */
    printf("Test a year to see if it's a leap year on Planet C\n\n");
    printf("Year: ");
    scanf("%d", &given_year);

    /* Given year is divisible by 7 */
    if ((given_year % 7) == 0)
    {
        /* Given year is NOT divisible by 35 or 77 */
        /* NOTE: The condition could be simplified, and a terary operator
            could be used, but may be less readable.
            Ex. is_leap_year = (given_year % 35 && given_year % 77) ? 1 : 0; */
        if (!(((given_year % 35) == 0) || ((given_year % 77) == 0)))
        {
            is_leap_year = 1;
        }
    }

    /* It is a leap year */
    if (is_leap_year)
        printf("%d is a leap year on planet C!\n", given_year);
    else
        printf("%d is not a leap year on planet C.\n", given_year);

    return 0;
}
