#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0)); // Use current time as seed for randomness
    int random_number = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed_number;
    int points = 100;

    printf("Jai Khosla(Star Saab)\n"); // Jai Khosla(Star Saab)  94,91,94 = 93                   //Ishwar Khosla    90,93,97 = 93.33
    // printf("Dad\n");
    // printf("Ishwar Khosla\n");

    // printf("Random number between 1 and 100: %d\n", random_number);
    // Generate and print a random number between 1 and 100

    do
    {
        printf("Enter a number between 1 to 100: ");
        scanf("%d", &guessed_number);
        no_of_guesses += 1;
        points -= 1;
        
            if (guessed_number < random_number)
            {
                printf("Higher Number Please\n");
            }
            else if (guessed_number > random_number)
            {
                printf("Lower Number Please\n");
            }
            else if (guessed_number == random_number)
            {
                printf("You have Won!!\n");
                printf("Your total number of guesses is/are: %d\n", no_of_guesses);
                printf("Your total Points (out of 100): %d", points);
            }
        
    }while (guessed_number != random_number);
           
    
    return 0;
}




