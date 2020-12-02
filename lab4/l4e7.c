/*
Exercise 7
Developer: Justin Bornais
Date: October 21st, 2020
*/

#include <stdio.h>
int main(void)
{
  int num1;
  int num2;
  int sum;
  int difference;
  int product;
  int quotient;
  
  // Part B: By adding just one statement to the above program, display your name and student id in two separate lines before prompting the user to enter first number.
  printf("Justin Bornais,\n110037759,\n");

  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  sum = num1 + num2; // Store the sum of the two user-defined integers.
  difference = num1 - num2; // Store the difference of the two user-defined integers.
  product = num1 * num2; // Store the product of the two user-defined integers.
  quotient = num1 / num2; // Store the quotient of the two user-defined integers.
  // printf("Sum of the entered numbers: \n"); // Given in original code.

  // Part A: Change the code to produce the result in the box format provided.
  printf("-------------------------------------\n");
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("|\t\t%d + %d = %d\t\t\t\t\t|\n", num1, num2, sum);
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("-------------------------------------\n\n");

  // Part C: Try to update such that it stores and prints out the following information as well, each of them in a separate line.

  // Box to display the difference.
  printf("-------------------------------------\n");
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("|\t\t%d - %d = %d\t\t\t\t\t|\n", num1, num2, difference);
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("-------------------------------------\n\n");

  // Box to display the product.
  printf("-------------------------------------\n");
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("|\t\t%d * %d = %d\t\t\t\t\t|\n", num1, num2, product);
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("-------------------------------------\n\n");

  // Box to display the quotient (let's pray the user did not enter 0 for num2!).
  printf("-------------------------------------\n");
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("|\t\t%d / %d = %d\t\t\t\t\t|\n", num1, num2, quotient);
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("-------------------------------------");
  return 0;
}