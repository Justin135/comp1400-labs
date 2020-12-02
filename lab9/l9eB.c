/*
Program: Number Frequency Calculator
Author: Justin Bornais
Date: November 25th, 2020
*/

// Including libraries.
#include <stdio.h> // This library is necessary for generating a random number.
#include <stdlib.h> // This library is necessary for generating a random number.
#include <time.h>

// Main function.
int main(void) {
  int arr[30]; // Initialize the arr array with 30 empty values.
  int num, frequency = 0; // Initialize other variables.

  srand(time(NULL)); // Initialize the timer.

  // Loop through the array.
  for(int i = 0;i < 30;i++) {
    arr[i] = rand() % 20 + 1;
  }

  puts("Please enter a number between 1 and 20:"); // Prompt user for a number.
  scanf("%d", &num); // Gets number and stores it in the num variable.

  // Loop through the array.
  for(int i = 0;i < 30;i++) {
    // Check if num is found in the array.
    if(arr[i] == num) {
      frequency++; // Increment the frequency variable.
    }
  }

  // Outputs results.
  printf("Array:\t");

  // Loop through the array.
  for(int i = 0;i < 30;i++) {
    printf("%d ", arr[i]); // Prints the values of the array.
  }

  // Outputs the number and the frequency of said number in the array.
  printf("\nFrequency of %d in the array:\t%d", num, frequency);
  return 0;
}