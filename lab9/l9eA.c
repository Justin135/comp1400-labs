/*
Program: Bubble Sort Timer
Author: Justin Bornais
Date: November 25th, 2020
*/

// Including libraries.
#include <stdio.h>
#include <stdlib.h> // This library is necessary for generating a random number.
#include <time.h> // Necessary for the timer.

// Main function.
int main(void) {

  int n = 0, temp; // Initialize necessary variables.
  clock_t start, end; // Clock variables for calculating time.


  puts("Please enter a positive number:"); // Prompt the user for a number.
  scanf("%d", &n); // Store user input.

  int arr[n]; // Initialize the array of numbers.

  srand(time(NULL)); // Initialize the timer.

  // Loop through all values of the array to initialize them with random numbers from the range 1 - 100.
  for(int i = 0;i < n;i++) {
    arr[i] = rand() % 100 + 1; // Produces value in between 1 and 100.
  }

  start = clock(); // Capture the current "clock ticks" before sorting begins.

  // Loops for all the values of the array (n - 1 because the loop goes to the array values after the value of j)
  for(int i = 0;i < n - 1;i++) {
    // Loops for all the values of the array up until n - i - 1
    for(int j = 0;j < (n - i - 1);j++) {

      // Check if the first index of the array is greater than the second.
      if(arr[j] > arr[j + 1]) {
        //Swap the values.
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = arr[j];
      }
    }
  }

  end = clock(); // Capture the current "clock ticks" after sorting ends.

  // Loop through the array to print its contents.
  for(int i = 0;i < n;i++) {
    printf("%d ", arr[i]); // Print the value at index i.
  }

  // Output results (end - start) / CLOCKS_PER_SEC determines time elapsed in seconds.
  printf("\nTotal elapsed time: %lf", (double) (end - start) / CLOCKS_PER_SEC);
  return 0;
}