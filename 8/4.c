/*
Name: Keenan Turley
Date (YMD): 2019-04-18

Practice Problem 8.4:
    Write a program that allows a user to play a guessing game.

    Pick a random number in between 1 and 100, and then prompt the user for a
    guess.

    For their first guess, if it’s not correct, respond to the user that their
    guess was “hot.”

    For all subsequent guesses, respond that the user was “hot” if their new
    guess is strictly closer to the secret number than their old guess and
    respond with “cold”, otherwise.

    Continue getting guesses from the user until the secret number has been
    picked.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret, guess, delta, prev_delta = 100;

    /* Seed random number generator */
    srand(time(NULL));

    /* Generate secret random number */
    secret = (rand() % 100) + 1;

    /* Introduce game */
    printf("Guess a number between 1 and 100!\n\n");

    /* Loop until user guesses secret */
    do
    {
        /* Ask for guess */
        printf("Guess: ");
        scanf("%d", &guess);

        /* Calculate delta */
        delta = abs(secret - guess);

        /* User guessed correctly */
        if (guess == secret)
            printf("You guessed the secret number, it was %d!\n", secret);
        else if (delta < prev_delta)
            printf("Hot.\n");
        else if (delta >= prev_delta)
            printf("Cold.\n");

        prev_delta = delta;
    }
    while (guess != secret);


    return 0;
}
