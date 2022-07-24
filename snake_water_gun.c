#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you, char comp){
    //return 1 if you win, -1 if you lose and 0 if draw
    //comdition for draw
    if(you == comp){
        return 0;
    }
    //non-draw comditionds
    //cases sw ws gs sg wg gw  
    if(you == 's' && comp == 'w'){
        return 1;
    }
    else if(you == 'w' && comp == 's'){
        return -1;
    }
    if(you == 's' && comp == 'g'){
        return -1;
    }
    else if(you == 'g' && comp == 's'){
        return 1;
    }
    if(you == 'w' && comp == 'g'){
        return 1;
    }
    else if(you == 'g' && comp == 'w'){
        return -1;
    }
}
    int main(){
        char you,comp;
        int number;
        srand(time(0));
        number = rand()%100+1;

        if(number<33){
            comp = 's';
        }
        else if(number>33 && number<66){
            comp = 'w';
        }
        else{
            comp = 'g';
        }
        printf("Enter s for snake, w for water, g for gun\n");
        scanf("%c",&you);
        int result = snakewatergun(you, comp);
        printf("You chose %c and computer chose %c.\n",you,comp);
        if(result == 0){
            printf("Game draw\n");
        }
        else if(result == 1){
            printf("You win\n");
        }
        else{
            printf("You lose\n");
        }
    return 0;
}