#include <stdio.h>

int main(void) {
  int num[10];
  int sum = 0;
  int average = 0;

  printf("Please enter 10 whole numbers:\n");

  for(int i = 0;i < 10;i++) {
    scanf("%d", &num[i]);
    sum += num[i];
  }

  average = sum / 10;

  printf("\nThe sum of all 10 numbers is %d and the average is %d.", sum, average);

  return 0;
}