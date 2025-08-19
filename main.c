// this is a guessing game
// i have chosen a number between 1 to 20

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    
    int guess, numofguesses ;
    time_t t = 0;
    
    //initializing the random number generator
    srand((unsigned) time (&t));
    
    //getting random number between 1 to 20 and store in an int variable
    int randomnum = rand()%21;
    
    //telling the guessing game to the user
    printf("\nthis is a guessing game.\n");
    printf("\ni have chosen a number between 1 to 20, which you must guess.\n");
    
    //applying loop
    for(numofguesses=5; numofguesses>0; --numofguesses)
    {
        printf("\nyou have %d tr%s left.\n", numofguesses, numofguesses == 1? "y": "ies");
        printf("\nenter a guess : ");
        scanf("%d", &guess);
        
        if(guess == randomnum)
        {
            printf("\ncongratulations. you guessed it ..! ");
            return 0;
        }
        
        else if ( guess<0 || guess> 20)
        {
            printf("\ni said the number is between 1 to 20.");
        }
        
        else if(randomnum > guess)
        {
            printf("\nsorry, %d is wrong. my number is greater than that.", guess);
        }
        
        else if(randomnum < guess)
        {
            printf("\nsorry, %d is wrong. my number is less than that.", guess);
        }
    }
        //if user fails to guess the number
        printf("\nyou have had five tries and failed. the number was %d\n", randomnum);
        
    return 0;
}
