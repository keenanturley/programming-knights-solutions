/*
Name: Keenan Turley
Date (YMD): 2019-01-14

Practice Problem:
    Write a program that calculates the cost of buying season football tickets. 
    
    Ask the user for the number of upper bowl tickets (these are $25 per game) 
    and lower bowl tickets (these are $50 per game) they desire, followed by 
    the number of games in the season and the sales tax, entered as a 
    percentage. 
    
    Output the total cost of all the tickets, including tax.
*/

#include <stdio.h>

#define UPPER_TICKET_COST 25
#define LOWER_TICKET_COST 50

int main(void)
{
    int upper_tickets, lower_tickets, num_games;
    float tax, total_cost;

    /* Ask user for number of upper and lower tickets */
    printf("Number of upper bowl tickets: ");
    scanf("%d", &upper_tickets);
    printf("Number of lower tickets: ");
    scanf("%d", &lower_tickets);

    /* Ask user for number of games */
    printf("Number of games in the season: ");
    scanf("%d", &num_games);

    /* Ask user for tax */
    printf("Tax (%): ");
    scanf("%f", &tax);

    /* Calculate total cost of tickets, including tax */
    total_cost = ((upper_tickets * UPPER_TICKET_COST) + 
                 (lower_tickets * LOWER_TICKET_COST)) * 
                 num_games * (1 + (tax / 100));

    /* Output total cost */
    printf("Total Cost: %.2f\n", total_cost);

    return 0;
}