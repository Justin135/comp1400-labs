#include <stdio.h>

int main(void) {
  int a;
  int check = 0;

  printf("Enter the first twelve digits of ISBN-13: ");

  for(unsigned int i = 0;i < 12;i++) {
    scanf("%1d", &a);

    if(i % 2 == 0) {
      check += a;
    }
    else {
      check += a * 3;
    }
  }


  check = 10 - (check % 10);

  printf("Check digit: %d", check);
  return 0;
}