#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
  if(number < 2) return false;
  if(number == 2) return true;
  for(int i=2; i<=number/2; i++) {
    if(number%i == 0) return false;
  }
  return true;
}

int main() {
  long number = 600851475143;
  int largestPrimeFactor = 1;
  while(number > 2) {
    for(long i=2; i<=number; i++) {
      if(number%i==0) {
        largestPrimeFactor = i;
        number /= i;
        break;
      }
    }
  }
  printf("%d", largestPrimeFactor);
}
