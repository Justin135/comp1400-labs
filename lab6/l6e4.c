#include <stdio.h>

int main(void) {
  int num;
  int product;

  printf("Please enter a number:\n");
  scanf("%d", &num);

  for(int i = 1;i <= 10;i++) {
    product = num * i;
    
    // To make the table look neater, tabs are used instead of spaces to evenly distribute the values.
    printf("%d\tx\t%d\t=\t%d\n", num, i, product);
  }
  return 0;
}