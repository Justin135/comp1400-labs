#include <stdio.h>

int main(void) {

  // Strings in C are char arrays. String arrays in C are 2D char arrays.
  char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  int num;
  printf("Please enter a number between 1 and 7:\n");
  scanf("%d", &num);

  // Error checking just in case the user enters a number outside of the range 1 - 7.
  if(num < 1) num = 1;
  else if(num > 7) num = 7;

  printf("%s", days[num - 1]);
  return 0;
}