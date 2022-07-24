#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int main(){

    int number;
    int guess , nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1;  //Generate random number between 1 to 100.
    //printf("The number is %d\n",number);
    // Keep running the loop until number is guessed.
    do
    {
        printf("Guess the number between 1 to 100,\n");
        scanf("%d",&guess);
        if(guess>number){
           printf("Lower number please,\n");
        }
        else if(guess<number){
            printf("Higher number please.\n");
        }
        else{
            printf("You guessed it is %d attempets.\n",nguesses);
        }
        nguesses++;
    } while (guess!=number);
    
    return 0;
}