/*
Name: Keenan Turley
Date (YMD): 2019-01-14

Practice Problem 6.4:
    Write a program that asks the user for the price of gasoline per gallon,
    the number of gallons of gas currently in their car, the miles per gallon
    their car gets, and the length of their road trip in miles and calculates
    and prints out the amount the user will have to spend on extra gas to
    complete the road trip.

    (You may assume that the user will have to buy some gas to complete the
    trip.)
*/

#include <stdio.h>

int main(void)
{
    float price_per_gallon, current_gas, miles_per_gallon, trip_length;
    float total;

    /* Ask for input */
    printf("Price of gas ($/gal): ");
    scanf("%f", &price_per_gallon);
    printf("Current gas (gallons): ");
    scanf("%f", &current_gas);
    printf("Vehicle miles per gallon: ");
    scanf("%f", &miles_per_gallon);
    printf("Trip length (miles): ");
    scanf("%f", &trip_length);

    /* Calculate total spent on extra gas */
    total = (trip_length - (current_gas * miles_per_gallon)) * price_per_gallon;

    /* Print total */
    printf("Total spent on extra gas: $%.2f\n", total);

    return 0;
}
