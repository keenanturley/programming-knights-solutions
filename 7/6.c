/*
Name: Keenan Turley
Date (YMD): 2019-04-16

Practice Problem 7.6:
    Sales clerks at "Computers R Us" get paid a bonus for their sales.
    In particular, they get $10 for each of the first 10 computers they sell in
    a month, $20 for the next 10 computers they sell in a month, and $40 for
    each computer thereafter.

    For example, if a clerk sells 15 computers, they make $100 for the first 10
    and $100 for the next 5 for a total of $200.

    Alternatively, if a clerk sells 22 computers, they make $380 in bonuses.

    Write a program that asks the user how many computers they sold and prints
    out their bonus for the month.
*/

#include <stdio.h>

int main(void)
{
    int computers_sold, bonus = 0;

    /* Ask user how many computers they sold */
    printf("Computers sold this month: ");
    scanf("%d", &computers_sold);

    /* Compute bonus */
    if (computers_sold >= 20)
        bonus = 100 + 200 + ((computers_sold - 20) * 40);
    else if (computers_sold >= 10 && computers_sold < 20)
        bonus = 100 + ((computers_sold - 10) * 20);
    else if (computers_sold < 10)
        bonus = computers_sold * 10;

    /* Display bonus */
    printf("Your bonus this month is $%d\n", bonus);

    return 0;
}
