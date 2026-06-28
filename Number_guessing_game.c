#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomenumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do
    {
        printf("Guess The Number:\n");
        scanf("%d", &guessed);
        if (guessed > randomenumber)
        {
            printf("Lower your guess\n");
        }
        else if (guessed < randomenumber)
        {
            printf("Higher your guess\n");
        }

        no_of_guesses++;

    } while (guessed != randomenumber);
    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}