#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time20
    
    srand(time(0));

    // Generate and print a random number in the range [0, RAND_MAX]
    int random_number = (rand() % 100) + 1;

    // Generate a random number in a specific range (e.g., 1 to 100)
    int random_in_range = (rand() % (100 - 1 + 1)) + 1;

    int no_of_guesses = 0;
    int guessed;

    do
    {

        printf("Guess the number\n");
        scanf("%d", &guessed);

        if (guessed > random_number)
        {
            printf("Lower number please!\n");
        }
        else if(guessed < random_number)
        {
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed != random_number);

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}
