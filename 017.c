#include <stdio.h>

int digitLen[] = {4, 3, 3, 5, 4, 4, 3, 5, 5, 4}; // digitLen[0] equals 4, because length of "zero" = 4
int teensLen[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8}; // ten, eleven, twelve etc.
int tensLen[] = {6, 6, 5, 5, 5, 7, 6, 6}; // twenty, thirty etc.
int hundred = 7; // the length of "hundred"
int and = 3; // the length of "and"

int oneDigitToLen(int n) {
  return digitLen[n];
}

int twoDigitToLen(int n) {
  int digitOne = n / 10;
  int digitTwo = n % 10;
  if(digitOne == 1) return teensLen[digitTwo];
  else if(digitTwo != 0) {
    return tensLen[digitOne-2] + digitLen[digitTwo];
  }
  else return tensLen[digitOne-2];
}

int threeDigitToLen(int n) {
  int digitOne = n / 100;
  n = n % 100;
  int digitTwo = n / 10;
  int digitThree = n % 10;
  if(digitTwo == 0) {
    if(digitThree == 0) return digitLen[digitOne] + hundred;
    else return digitLen[digitOne] + hundred + and + digitLen[digitThree];
  }
  else if(digitThree == 0) {
    if(digitTwo != 1) return digitLen[digitOne] + hundred + and + tensLen[digitTwo-2];
    else return digitLen[digitOne] + hundred + and + 3;
  }
  else {
    if(digitTwo != 1) return digitLen[digitOne] + hundred + and + tensLen[digitTwo-2] + digitLen[digitThree];
    else return digitLen[digitOne] + hundred + and + teensLen[digitThree];
  }
}

int numberToLen(int n) {
  if(n == 1000) return 11;
  if(n > 99) return threeDigitToLen(n);
  if(n > 9) return twoDigitToLen(n);
  else return oneDigitToLen(n);
}

void main() {
  int total = 0;
  for(int i=1; i<=1000; i++) {
    total += numberToLen(i);
  }
  printf("Result: %d", total);
}
