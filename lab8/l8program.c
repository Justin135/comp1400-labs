/*
Program: Functions Introduction
Author: Justin Bornais
Date: November 18th, 2020
*/

// Include standard libraries.
#include <stdio.h>
#include <math.h>

// Declare functions.
float areaOfCircle(float r);
long long int factorial(int num);
void decimalToBinary(int num);

// Main function.
int main(void) {

  // Prints the factorials of the numbers 2, 3, 4, 5, 10 and 15.
  // NOTE: the maximum value the function can correctly calculate is 20. 20! = 2432902008176640000, like the program outputs. However for 21!, the output is a negative integer number.
  puts("Factorials (values 2, 3, 4, 5, 10, 15 respectively):");
  printf("%lld\n", factorial(2)); // Prints the factorial of 2 or 2!
  printf("%lld\n", factorial(3)); // Prints the factorial of 3 or 3!
  printf("%lld\n", factorial(4)); // Prints the factorial of 4 or 4!
  printf("%lld\n", factorial(5)); // Prints the factorial of 5 or 5!
  printf("%lld\n", factorial(10)); // Prints the factorial of 10 or 10!
  printf("%lld\n", factorial(15)); // Prints the factorial of 15 or 15!

  // No need to put these functions in printf statements since the functions print the values themselves.
  puts("\nDecimal to Binary Conversion (values 1, 2, 10, 1001, 90250 respectively):");
  decimalToBinary(1); // Prints the binary value of 1.
  decimalToBinary(2); // Prints the binary value of 2.
  decimalToBinary(10); // Prints the binary value of 10.
  decimalToBinary(1001); // Prints the binary value of 1001.
  decimalToBinary(90250); // Prints the binary value of 90250.

  // Function terminated with no errors.
  return 0;
}

// Function for the area of a circle with a given radius r.
float areaOfCircle(float r) {
  // Initialize pi.
  float pi = 3.141592653589793;

  return pi * pow(r, 2); // Return the value of the area equation 
}

// Function to determine the factorial of a number, or num!
long long int factorial(int num) {
  // Initialize the answer variable.
  long long int result = 1;

  for(int i = 1;i <= num;i++) {
    result *= i; // Multiply result by i.
  }

  return result;
}

// Function to convert a decimal number (base 10) to binary (base 2).
void decimalToBinary(int num) {
  // Array of ints equal to the number of digits the binary number will store. This way there's no memory wasted.
  int length = ceil(log2(num + 1));
  int digits[length];

  for(int i = 0;i < length;i++) {
    // This will automatically store the values in reverse to prevent having to reverse the array afterwards.
    digits[length - i - 1] = num % 2;
    num /= 2;
  }

  // Print the values of the array.
  for(int i = 0;i < length;i++) {
    printf("%d", digits[i]);
  }

  printf("\n");
}