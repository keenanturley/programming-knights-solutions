/*
Name: Keenan Turley
Date (YMD): 2019-04-15

Practice Problem 7.1:
    Write a program that does temperature conversion from either Fahrenheit to 
    Celsius, or the other way around. 
    
    Your program should first prompt the user for which type of conversion they 
    want to do. 
    
    Then your program should prompt the user for the temperature they want to 
    convert.

    Finally, your program should output the proper converted temperature. 
    
    The formula for conversion from Celsius to Fahrenheit is:
    
    F = 1.8*C + 32
*/

#include <stdio.h>

int main(void)
{
    float c, f;
    int choice;

    /* Get user conversion choice */
    printf("Temperature Conversion\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice (1-2): ");
    scanf("%d", &choice);

    /* User selects C -> F */
    if (choice == 1)
    {
        /* Get temperature */
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);

        /* Calculate temp in F */
        f = (1.8 * c) + 32;

        /* Output converted temp */
        printf("%f C = %f F\n", c, f);
    }

    /* User selects F -> C*/
    if (choice == 2)
    {
        /* Get temperature */
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);

        /* Calculate temp in C */
        c = (f - 32) / 1.8;

        /* Output converted temp */
        printf("%f F = %f C\n", f, c);
    }

    return 0;
}