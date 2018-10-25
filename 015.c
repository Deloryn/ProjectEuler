#include <stdio.h>
#include "015.h"

#define MAX_SIZE 20

long move_right(int x, int y) {
  x += 1;
  if(x == MAX_SIZE) return 1;
  else if(x == y) return 2 * move_right(x, y);
  else return move_right(x, y) + move_down(x, y);
}

long move_down(int x, int y) {
  y += 1;
  if(y == MAX_SIZE) return 1;
  else if(x == y) return 2 * move_down(x, y);
  else return move_right(x, y) + move_down(x, y);
}

void main() {
  long result = 2 * move_right(0, 0);
  printf("Result: %ld", result);
}
