#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int num;
  bool prime = true;

  printf("Please enter a whole number:\n");
  scanf("%d", &num);

  for(int i = 2;i <= num/2;i++) { // The first possible factor is 2, so start at 2 and end at num/2.
    if(num % i == 0) { // num has a factor and is therefore not a prime number.
      prime = false;
      break;
    }
  }

  if(prime) {
    printf("The number %d is prime.", num);
  }
  else {
    printf("The number %d is composite (not prime).", num);
  }
  return 0;
}