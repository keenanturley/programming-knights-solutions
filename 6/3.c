/*
Name: Keenan Turley
Date (YMD): 2019-01-14

Practice Problem 6.3:
    Write a program that asks the user for their hourly pay, the number of hours
    they work in a week, and the number of weeks they are working in the 
    summer, as well as the cost of a single video game.

    Output the total number of video games they could buy, if they spent all of 
    their earnings on video games, as well as the leftover money they would have.

    (The latter value must be strictly less than the cost of a game.) 

    Assume all inputs are positive integers.
*/

#include <stdio.h>
#include <math.h>

int main() 
{
    // Define required variables
    float hourly_pay, game_cost;
    int hours_worked_weekly, weeks_worked;

    // Get values
    printf("Hourly pay: ");
    scanf("%f", &hourly_pay);

    printf("Hours worked in a week: ");
    scanf("%d", &hours_worked_weekly);

    printf("Weeks worked in the summer: ");
    scanf("%d", &weeks_worked);

    printf("Cost of a video game: ");
    scanf("%f", &game_cost);

    // Calculate total pay
    float pay = hourly_pay * hours_worked_weekly * weeks_worked; 

    // Calculate possible number of games bought
    int games = pay / game_cost;

    // Calculate remaining money
    float change = fmodf(pay, game_cost);

    // Print games and change
    printf("Games: %d, Change: %.2f\n", games, change);

    return 0;
}