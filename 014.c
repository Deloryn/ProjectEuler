#include <stdio.h>

long nextCollatzElement(long n) {
  if(n%2 == 0) return n/2;
  else return 3*n + 1;
}

int lengthOfCollatz(int startingNumber) {
  long element = startingNumber;
  int length = 1;
  do {
    element = nextCollatzElement(element);

    length += 1;
  } while(element != 1);
  return length;
}

void main() {
  int bestStartingNumber = 0;
  int currentMaxLength = 0;
  int tempLength;
  for(int i=1; i<1000000; i++) {
    tempLength = lengthOfCollatz(i);
    if(tempLength > currentMaxLength) {
      currentMaxLength = tempLength;
      // printf("Length: %d\n", tempLength);
      bestStartingNumber = i;
    }
  }
  printf("Result: %d", bestStartingNumber);
}
