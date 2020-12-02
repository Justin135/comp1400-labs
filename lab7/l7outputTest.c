#include <stdio.h>

int main(void) {
  int i = 1, a = 0;
 printf("Sum of %d ",i);
 do
 { a = a + i;
 i++;
 }
 while(i <= 5);
 printf("to %d is %d", --i, a);
  return 0;
}