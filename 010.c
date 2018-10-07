#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
  for(int i=3; i<=number/2; i+=2) {
    if(number%i == 0) return false;
  }
  return true;
}

void main() {
  long sum = 2;
  for(int i=3; i<2000000; i+=2) {
    if(isPrime(i)) sum += i;
  }
  printf("Result: %ld", sum);
}
