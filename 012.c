#include <stdio.h>

int countDivisors(int number) {
  int counter = 2;
  for(int i=2; i<=number/2; i++) {
    if(number%i == 0) counter += 1;
  }
  return counter;
}

void main() {
  long previousElement = 1;
  long element = 3;
  long counter = 3;
  while(countDivisors(element) <= 500) {
    previousElement = element;
    element += counter;
    counter += 1;
  }
  printf("Result: %ld", element);
}
