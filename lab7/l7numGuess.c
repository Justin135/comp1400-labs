/*
Program: Number Guessing Game
Author: Justin Bornais
Date: November 11th, 2020
*/

// Including libraries.
#include <stdio.h>
#include <stdlib.h> // This library is necessary for generating a random number.

// Main function where all the code is to run.
int main(void) {

  int num = rand() % 50 + 1; // Generates a random number between 1 and 50.
  // Initialize other variables.
  int guess;
  int numGuesses = 0;

  // Loops until the user enters the correct number.
  while(guess != num) {
    numGuesses++; // Increment numGuesses by 1.
    printf("Enter your guess (between 1 and 50): "); // Prompt the user for input.
    scanf("%d",&guess); // Get an integer input from the user and store it in the guess variable.

    // Check if the user's guess is less than, greater than or equal to the auto-generated number.
    if(guess > num) {
      // If the user guessed 10 times, break the loop.
      if(numGuesses == 10) {
        printf("Sorry, the number was %d.", num); // Print the answer.
        break; // Break the loop
      }
      else {
        puts("Too high ..."); // Tell the user their guess is too high.
      }
    }
    else if(guess < num) {
      // If the user guessed 10 times, break the loop.
      if(numGuesses == 10) {
        printf("Sorry, the number was %d.", num); // Print the answer.
        break;
      }
      else {
        puts("Too low ..."); // Tell the user their guess is too high.
      }
    }
    else {
      // The user entered the correct number. Congratulate them.
      printf("Correct, the number was %d.", num);
      // No break statement is necessary since the loop will terminate by itself due to the condition guess != num.
    }
  }
  
  // Returns 0 to show no errors have occured.
  return 0;
}