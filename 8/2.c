/*
Name: Keenan Turley
Date (YMD): 2019-04-18

Practice Problem 8.1:
    Write a program that calculates the amount of money stored in a bank
    account after a certain number of years.

    The user should enter in the initial amount deposited into the account,
    along with the annual interest percentage and the number of years the
    account will mature.

    The output should provide the amount of money in the account after every
    year.
*/

#include <stdio.h>

int main(void)
{
    double balance;
    float interest_rate;
    int maturing_years, i;

    /* Get initial balance */
    printf("Initial balance: $");
    scanf("%lf", &balance);

    /* Get annual interest percentage */
    printf("Annual interest (%): ");
    scanf("%f", &interest_rate);

    /* Get number of years to mature */
    printf("Years to mature: ");
    scanf("%d", &maturing_years);

    for (i = 0; i < maturing_years; i++)
    {
        /* Add interest onto current balance */
        balance += (balance * (interest_rate / 100));

        /* Output balance after each year */
        printf("Balance after %d years: %.2lf\n", i + 1, balance);
    }

    return 0;
}
