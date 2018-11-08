#include <stdio.h>

int sumProperDivisors(int n) {
  int total = 0;
  for(int i=1; i<n; i++) {
    if(n%i == 0) total += i;
  }
  return total;
}

int sumAmicablePair(int a) {
  int b = sumProperDivisors(a);
  if(a == sumProperDivisors(b) && b < 10000 && a != b) return a + b;
  else return 0;
}

void main() {
  int result = 0;
  for(int i=1; i<10000; i++) {
    result += sumAmicablePair(i);
  }
  result /= 2;
  printf("Result: %d", result);
}
