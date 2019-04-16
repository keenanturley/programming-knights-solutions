/*
Name: Keenan Turley
Date (YMD): 2019-04-16

Practice Problem 7.5:
    Write a guessing game for two players where both players guess a number in 
    between 1 and 100. 
    
    Your program should generate the "secret number" randomly. 
    
    The winner is determined as follows:

    If both players guess the same number, the first player wins.

    If one player's guess is closer than the other player, then that player 
    wins.
    
    If both players' guesses are off by the same value, then the player that 
    guessed the lower number wins.
    
    For example, if the secret number is 71 and the two players guesses are 64 
    and 77, then the player that guesses 77 wins, since 77 - 71 = 6 and 
    71 - 64 = 7. 
    
    Alternatively, if the secret number is 45 and the two players guesses are 
    36 and 54, then the player that guesses 36 wins, since 45 - 36 = 9, 
    54 - 45 = 9, and 36 is less than 54.

Personal Note:
    I'm not sure if the ternary operator is explained in chapter 7, but I
    thought the solution was pretty elegant using it.

    The explanation: 

    We compute the deltas (distance between guess and secret) for each guess, 
    so we know that (delta1 < delta2) means that guess1 is closer to the secret 
    than guess2 is. If that condition is true, we also then know that the 
    opposite condition, (delta2 <= delta1), is false. I wrap that condition 
    with (delta1 != delta2), you can eliminate the equal in (delta2 <= delta1). 
    
    The ternary operator therefore accounts for both case 1 and case 2.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SECRET_MIN 1
#define SECRET_MAX 100

int main(void)
{
    int secret, guess1, guess2, winner;
    int delta1, delta2;

    /* Seed random number generator */
    srand(time(NULL));

    /* Introduce game */
    printf("-- Number Guesser --\n");
    printf("Player 1 and Player 2 will guess a number between %d and %d\n\n", 
            SECRET_MIN, SECRET_MAX);

    /* Generate secret number */
    secret = (rand() % SECRET_MAX) + SECRET_MIN;
    printf("%d\n", secret);

    /* Ask players for their guess */
    printf("Player 1 guess: ");
    scanf("%d", &guess1);
    printf("Player 2 guess: ");
    scanf("%d", &guess2);

    /* Determine winner based on given criteria */

    /* Compute deltas */
    delta1 = abs(secret - guess1);
    delta2 = abs(secret - guess2);

    /* Case 2: one player's guess is closer than the other's */
    /* Guesses aren't the same distance away from secret */
    if (delta1 != delta2)
        winner = (delta1 < delta2) ? 1 : 2;
    /* Case 1: player 1 wins if player 2 guesses same number */
    /* Case 3: if guesses have the same delta, the lesser guess wins */
    /* Guesses are the same distance away from secret */
    else 
        winner = (guess1 <= guess2) ? 1 : 2; 

    /* Announce secret number and winner */
    printf("The secret number was: %d\n", secret);
    printf("Player %d wins!\n", winner);

    return 0;
}