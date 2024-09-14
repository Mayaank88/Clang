#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int number,num,count=1;
    number = rand()%100+1;  //generate random number between 1 and 100 
    printf("\n\n\n####### WELCOME TO NUMBER GUESSING GAME #######");
//making a loop for this game
do
{
    printf("\n||||||Make the Guess of any number between 1 and 100||||||*|\n");
    printf("your guess: ");
    scanf("%d",&num);
    if (num>number)
    {
        printf("Lower number please!\n");
        count+=1;
    }
    else if (num<number)
    {
        printf("Higher number please!\n");
        count+=1;
    }
    else{
        printf("Bravo!!! 💥💥💥You guessed the number correctly💥💥💥\n");
        printf("Your number of guesses: %d\n",count);
    }
    
    
} while (num!=number);
return 0;
}