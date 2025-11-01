#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    srand(time(0));       // For generating random numbers before every loop
    
    char a = 'Y';
    printf("\nWelcome to my game , ");
    while(a == 'Y' || a == 'y'){       // If the subject wants to run the code again

        int random = (rand() % 100)+1;  // <--------This is here so that the "while" loop dont reuse the same number 
        int num;
        int max_attempts = 5;   //Defining the number of attempts

        printf("\nYou have to guess a number between 1 & 100\nGood Luck !");


        for (int attempt = 1; max_attempts>=attempt; max_attempts--){ // MAIN LOGIC
            printf("You have %d attempts left\n", max_attempts);
            scanf("%d", &num);

            if (num == random){

                if(rand() % 2 == 0){
                    printf("Wow you are good at this !! you won\n");             // <-------------|
                    break;                                                       //               |
                }                                                                //  It'll print any of these 2 strings
                else {                                                           //               |
                    printf("Congratulations! You guessed the correct number.\n");// <-------------|
                    break;
                }
                
            }

            else if (num > random){
                printf("\nToo High\n");
            }

            else if (num < random){
                printf("\nToo low\n");
            }
    
            if(max_attempts<=1){  //This is in the "while" loop so it gets print when the loop ends...
                printf("\nSorry, you've used all your attempts. The correct number was %d" , random);
        
            }
        }
        printf("\nDo you want to play again(Y/N)\n");
        scanf(" %c", &a);
    }   
    
    printf("\nThanks for playing my game !");

    return 0;
}
