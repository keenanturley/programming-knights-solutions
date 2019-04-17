/*
Name: Keenan Turley
Date (YMD): 2019-04-17

Practice Problem 7.8:
    Two competing companies offer different bulk buying plans for buying boxes
    of cereal.

    The first 100 boxes are at one price point, the next 1000 are at a second
    price point and all subsequent boxes are at a third price point.

    Ask the user to enter the three price points for two companies as well as
    the number of boxes they desire to buy.

    Your program should print out which company they should go with and how
    much their purchase will cost.

    If both companies will provide the same price, you may choose either.

    Consider the price points of two companies shown below:

    /----------------------------------------------------------------------\
    | Company | Price for first 100 | Price for next 1000 | Price for rest |
    |----------------------------------------------------------------------|
    | 1       | $2.99               | $1.99               | $1.50          |
    | 2       | $2.50               | $2.25               | $1.75          |
    \----------------------------------------------------------------------/

    If we buy 2000 boxes of cereal from company 1, we spend
    100*$2.99 + 1000*$1.99 + 900*$1.50 = $3639.

    If we buy the same boxes from company 2, we spend
    100*$2.50 + 1000*$2.25 + 900*$1.75 = $4075.

    Thus, in this case, we should go with company 1.
*/

#include <stdio.h>

int main(void)
{
    float c1_price_100, c1_price_1000, c1_price_rest;
    float c2_price_100, c2_price_1000, c2_price_rest;
    int num_boxes;
    float c1_total, c2_total;

    /* Ask user for Company 1 prices */
    printf("Company 1\n");
    printf("Price for first 100: $");
    scanf("%f", &c1_price_100);
    printf("Price for next 1000: $");
    scanf("%f", &c1_price_1000);
    printf("Price for rest: $");
    scanf("%f", &c1_price_rest);
    printf("\n");

    /* Ask user for Company 2 prices */
    printf("Company 2\n");
    printf("Price for first 100: $");
    scanf("%f", &c2_price_100);
    printf("Price for next 1000: $");
    scanf("%f", &c2_price_1000);
    printf("Price for rest: $");
    scanf("%f", &c2_price_rest);
    printf("\n");

    /* Ask user for number of boxes to buy */
    printf("Number of boxes to buy: ");
    scanf("%d", &num_boxes);

    /* Calculate total price for each company */
    if (num_boxes <= 100)
    {
        c1_total = num_boxes * c1_price_100;
        c2_total = num_boxes * c2_price_100;
    }
    else if (num_boxes > 100 && num_boxes <= 1100)
    {
        c1_total = (100 * c1_price_100) + ((num_boxes - 100) * c1_price_1000);
        c2_total = (100 * c2_price_100) + ((num_boxes - 100) * c2_price_1000);
    }
    else if (num_boxes > 1100)
    {
        c1_total = (100 * c1_price_100) + (1000 * c1_price_1000) +
            ((num_boxes - 1100) * c1_price_rest);
        c2_total = (100 * c2_price_100) + (1000 * c2_price_1000) +
            ((num_boxes - 1100) * c2_price_rest);
    }

    /* Output chosen company and price */
    if (c1_total <= c2_total)
    {
        printf("You should go with Company 1.\n");
        printf("Your purchase will cost $%.2f.\n", c1_total);
    }
    else
    {
        printf("You should go with Company 2.\n");
        printf("Your purchase will cost $%.2f.\n", c2_total);
    }

    return 0;
}
