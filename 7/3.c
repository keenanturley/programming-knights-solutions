/*
Name: Keenan Turley
Date (YMD): 2019-04-15

Practice Problem 7.3:
    Write a program that prompts the user for 2 pieces of information: 
    (1) age, (2) amt. of cash they have. 
    
    Based upon these inputs, your program should produce one of the four 
    outputs below for the given situations:

    -------------------------------------------------------------------------
    | Situation         | Output                                            |
    |-------------------|---------------------------------------------------|
    | A < 21, M < 100   | "You have some time before you need more money."  |
    | A < 21, M >= 100  | "You have got it made!"                           |
    | A >= 21, M < 100  | "You need to get a job!"                          |
    | A >= 21, M >= 100 | "You are right on track."                         |
    -------------------------------------------------------------------------

Personal Note:
    This is my first time trying to make a fancy table using ascii characters
    in a comment. I'm proud of myself.
*/

#include <stdio.h>

int main(void)
{
    int age;
    float cash;

    /* Get age and cash from user */
    printf("Your age: ");
    scanf("%d", &age);
    printf("Total cash: ");
    scanf("%f", &cash);

    /* Tell the user something based on their inputs */
    /* NOTE: You could do this with 4 if statements in main() scope, but I
        chose to nest them. I think this is *mostly* just preference. */
    if (age < 21)
    {
        if (cash < 100)
            printf("You have some time before you need more money.\n");
        else if (cash >= 100)
            printf("You have got it made!\n");
    }
    else if (age >= 21)
    {
        if (cash < 100)
            printf("You need to get a job!\n");
        else if (cash >= 100)
            printf("You are right on track.\n");
    }
    
    return 0;
}
