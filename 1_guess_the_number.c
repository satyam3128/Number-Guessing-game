#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int random, guess;
    int no_guess = 0;

    // seed the Random number on the basis of Time.
    srand(time(NULL));
    printf("Welcome to the World of Guessing Numbers\n");

    random = rand() % 100 + 1; // generating between 1 to 100
    do
    {
        printf("Please Enter Your Guess between 1 to 100: ");
        scanf("%d", &guess);
        no_guess++;
        if (guess < random)
        {
            printf("\nGuess the larger Number.\n");
        }
        else if (guess > random)
        {
            printf("\nGuess the Smaller number.\n");
        }
        else
        {
            printf("Congrulation !! You have Sucessfully guessed the Number in %d attempt", no_guess);
        }

    } while (guess != random);
    printf("\nBye Bye, Thanks for Playing.");
    printf("\n Developed by Satyam Suman.");
    return 0;
}
