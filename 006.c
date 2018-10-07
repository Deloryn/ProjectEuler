#include <stdio.h>

int main() {
  int sumOfSquares = 0;
  int sumOfNumbers = 0;
  int squareOfNumbers;

  for(int i=1; i<=100; i++) {
    sumOfNumbers += i;
    sumOfSquares += (i*i);
  }

  squareOfNumbers = sumOfNumbers * sumOfNumbers;
  printf("Result: %d", squareOfNumbers-sumOfSquares);
}
