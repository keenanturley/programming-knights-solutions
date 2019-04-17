/*
Name: Keenan Turley
Date (YMD): 2019-04-17

Practice Problem 7.7:
    Write a program that calculates the number of pitchers of lemonade that can
    be made with certain raw materials.

    Ask the user to enter the number of teaspoons of sugar and number of lemons
    necessary to make a pitcher of lemonade.

    Follow this by asking the user the total number of teaspoons of sugar and
    number of lemons that are available to make lemonade.

    Use this information to calculate the number of full pitchers of lemonade
    that can be made and also print out the leftover ingredients (number of
    teaspoons of sugar and lemons) after those pitchers have been made.
*/

#include <stdio.h>

int main(void)
{
    int sugar_per_pitcher, lemons_per_pitcher;
    int total_sugar, total_lemons;
    int num_full_pitchers;
    int leftover_sugar, leftover_lemons;

    /* Ask for ingredients for one pitcher */
    printf("Teaspoons of sugar per pitcher: ");
    scanf("%d", &sugar_per_pitcher);
    printf("Lemons per pitcher: ");
    scanf("%d", &lemons_per_pitcher);

    /* Ask for total amount of ingredients */
    printf("Total teaspoons of sugar: ");
    scanf("%d", &total_sugar);
    printf("Total lemons: ");
    scanf("%d", &total_lemons);

    /* Number of full pitchers that can be made with available ingredients */
    if ((total_sugar / sugar_per_pitcher) < (total_lemons / lemons_per_pitcher))
        num_full_pitchers = (total_sugar / sugar_per_pitcher);
    else
        num_full_pitchers = (total_lemons / lemons_per_pitcher);

    /* Calculate leftover ingredients */
    leftover_sugar = total_sugar - (num_full_pitchers * sugar_per_pitcher);
    leftover_lemons = total_lemons - (num_full_pitchers * lemons_per_pitcher);

    /* Output number of full pitchers and leftover ingredients */
    printf("You have enough ingredients to make %d full pitchers of lemonade.\n",
        num_full_pitchers);
    printf("You will also have %d teaspoons of sugar and %d lemons leftover.\n",
        leftover_sugar, leftover_lemons);

    return 0;
}
