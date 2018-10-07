#include <stdio.h>
#include <stdbool.h>

bool isValidTriplet(int a, int b, int c){
  if(a*a + b*b == c*c) return true;
  else return false;
}

int main() {
  int result = 0;

  for(int a=1; a<999; a++) {
    for(int b=1; b<999; b++) {
      for(int c=1; c<999; c++) {
        if(a+b+c==1000 && isValidTriplet(a, b, c)) {
          printf("Result: %d", a*b*c);
          return 0;
        }
      }
    }
  }
  printf("Result: %d", 0);
  return 0;
}
