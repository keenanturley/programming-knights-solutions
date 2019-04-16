/*
Name: Keenan Turley
Date (YMD): 2019-04-16

Practice Problem 7.4:
    Scholarships are given based on students' SAT score and GPA. 
    
    In particular, based on these two items, a composite score is calculated 
    with the following formula:

    (SAT score) / 1000 + GPA

    (Note: The formula refers to real number division.) 
    
    The amount of scholarship money awarded is based on this composite score as 
    follows:

    /-----------------------------------------------\
    | Composite Score (s)   | Scholarship Amount    |
    |-----------------------------------------------|
    | 4 < s < 5             | $1000                 |
    | 5 <= s < 6            | $2500                 |
    | s >= 6                | $5000                 |
    \-----------------------------------------------/

    Write a program that asks the user for their SAT score and GPA and prints 
    out the amount of scholarship money they receive.
*/

#include <stdio.h>

int main(void)
{
    float sat, gpa, composite;
    int scholarship_money;

    /* Ask user for SAT score and GPA */
    printf("SAT score: ");
    scanf("%f", &sat);
    printf("GPA: ");
    scanf("%f", &gpa);

    /* Calculate composite score */
    composite = (sat / 1000) + gpa;

    /* Determine scholarship amount from composite score (see above table) */
    if ((composite > 4) && (composite < 5))
        scholarship_money = 1000;
    else if ((composite >= 5) && (composite < 6))
        scholarship_money = 2500;
    else if (composite >= 6)
        scholarship_money = 5000;
    else
        scholarship_money = 0;

    /* Output scholarship money */
    printf("You will receieve $%d in scholarship money.\n", scholarship_money);
    
    return 0;
}