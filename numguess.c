#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;
    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("Guess the number (between 1 and 100):\n");
    do
    {
        attempts++;
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < number)
        {
            printf("Too low!\n");
        }
        else if (guess > number)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
