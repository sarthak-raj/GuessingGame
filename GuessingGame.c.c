#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guess_count = 0;
    srand(time(0));
    number = rand() % 100 + 1; // Generates random number between 1 to 100
    do
    {
        printf("Enter the number between 1 to 100: ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("You guessed it right. The number was %d.\n", guess);
        }
        guess_count++;
    } while (guess != number);

    printf("The total number of guess you took = %d.\n", guess_count);
    return 0;
}