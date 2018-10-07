#include <stdio.h>
#include <stdbool.h>

int isPrime(int number) {
  if(number<2) return false;
  if(number==2) return true;
  for(int i=2; i<=number/2; i++) {
    if(number%i == 0) return false;
  }
  return true;
}

int main() {
  int counter = 0;
  int number = 1;
  while(counter != 10001) {
    number += 1;
    if(isPrime(number)) counter += 1;
  }
  printf("Result: %d", number);
}
