#include <stdio.h>

int main() {
  int fib1 = 1;
  int fib2 = 2;
  int sum = fib2;
  int next = fib1+fib2;

  while(next <= 4000000) {
    if(next%2 == 0) sum += next;
    fib1 = fib2;
    fib2 = next;
    next = fib1+fib2;
  }

  printf("%d", sum);
}
