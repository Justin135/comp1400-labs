#include <stdio.h>

int main(void) {
  int a;
  int b;
  int c;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if(a >= b && a >= c) {
    printf("The largest number is %d and ", a);
      
    if(b >= c) {
      printf("the smallest number is %d.\n", c);
    }
    else {
      printf("the smallest number is %d.\n", b);
    }
  }
  else if(b > a && b > c) {
    printf("The largest number is %d and ", b);

    if(a >= c) {
      printf("the smallest number is %d.\n", c);
    }
    else {
      printf("the smallest number is %d.\n", a);
    }
  }
  else {
    printf("The largest number is %d and ", c);

    if(a >= b) {
      printf("the smallest number is %d.\n", b);
    }
    else {
      printf("the smallest number is %d.\n", a);
    }
  }
  return 0;
}