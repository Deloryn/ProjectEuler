#include <stdio.h>
#include <stdbool.h>

int isEvenlyDivisable(int number, int leftRange, int rightRange) {
  for(int i=leftRange; i<=rightRange; i++){
    if(number%i != 0) return false;
  }
  return true;
}

int main() {
  int number = 1;
  while(!isEvenlyDivisable(number, 1, 20))
    number += 1;
  printf("%d", number);
}
