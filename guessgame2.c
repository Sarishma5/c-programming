#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
        // create variable to store the random number between 1 and 100
	int random_number;
	
	// reset random number generators
	srand(time(NULL));
	
	// generate a random number and take its modulo with 100 and add one 
	// now we have a number between 1 and 100
	random_number = (rand() % 100) + 1;
	
	// Ask for the first input from user
	printf("Enter a guess for the number between 1 and 100\n");
	
	// create variable to store user's guessed number and number of tries
	int user_guess, tries = 0;
	
	// start do while loop of the game
	do{
	   
	   // take input from the user 
	   scanf("%d", &user_guess);
	   
	   // if the guess is larger than the random number
	   if(user_guess > random_number){
	       
	       // tell the user the guess is greater than the number
	       printf("The number you entered is greater");
	       tries++;
	       
	   }
	   // else if the guess is smaller than the random number
	   else if(user_guess < random_number){
	       
	       // tell the user the guess is smaller than the number
	       printf("The number you entered is smaller");
	       tries++;
	       
	   }
	   // else the guess is equal to the random number
	   else{
	       
	       // user won the game
	       printf("Correct Guess, You Won in %d tries!", tries);
	       
	   }
	    
	}
	while(user_guess != random_number);
	
	return 0;
}

