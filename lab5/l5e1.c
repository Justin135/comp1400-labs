#include <stdio.h>

int main(void) {
  int a;
  int b;

  scanf("%d", &a);
  scanf("%d", &b);

  int remainder = a % b;
  printf("The remainder of %d / %d = %d", a, b, remainder);
  return 0;
}