#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void password_generator(int N)
{
    int i = 0;
    int randomizer = 0;

    // Seed the random-number generator
    // with current time so that the
    // numbers will be different every time
    srand((unsigned int)(time(NULL)));

    // Making Arrays of numbers
    char number[] = "0123456789";
    // Making Arrays of Capital Alphabet
    char Capital_letter[] = "ABCDEFGHIJKLMNOQPRSTUVWXYZ";
    // Making Arrays of Small Alphabet
    char small_letter[] = "abcdefghijklmnoqprstuvwxyz";
    // Making Arrays of special charcters
    char special_char[] = "!@#$^&*?";
    // Stores a random password
    char PASSWORD[N];

    // To select the randomizer inside the loop
    randomizer = rand() % 4;
    printf("Your password is : ");

    // Iterate over the range[0 , N]
    for (i = 0; i < N; i++)
    {
        if (randomizer == 1)
        {
            PASSWORD[i] = number[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", PASSWORD[i]);
        }
        else if (randomizer == 2)
        {
            PASSWORD[i] = Capital_letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", PASSWORD[i]);
        }
        else if (randomizer == 3)
        {
            PASSWORD[i] = small_letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", PASSWORD[i]);
        }
        else
        {
            PASSWORD[i] = special_char[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", PASSWORD[i]);
        }
    }
    printf("\nThank you for using this program.");
}
// Drive Code
int main()
{
    int n;
    printf("Enter your desired lenght : ");
    scanf("%d", &n);
    // Function Call
    password_generator(n);
    return 0;
}