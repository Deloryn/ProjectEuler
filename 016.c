#include <stdio.h>
#define N 1000


void initWithZeros(char number[1000]) {
  for(int i=0; i<1000; i++) {
    number[i] = '0';
  }
}

void initAsNumOne(char number[1000]) {
  initWithZeros(number);
  number[999] = '1';
}

void swapArrays(char array1[1000], char array2[1000]) {
  char temp;
  for(int i=0; i<1000; i++) {
    temp = array1[i];
    array1[i] = array2[i];
    array2[i] = temp;
  }
}

long totalFromNumber(char number[1000]) {
  long total = 0;
  for(int i=0; i<1000; i++) {
    total += (number[i] - '0');
  }
  return total;
}

void addTwoCharDigits(char sum[2], char a, char b) {
  int digit1 = a - '0';
  int digit2 = b - '0';
  sum[1] = (digit1 + digit2) % 10 + '0';
  sum[0] = (digit1 + digit2) / 10 + '0';
}

void doubleCharDigit(char mul[2], char digit) {
  int multiplication = (digit - '0') * 2;
  mul[1] = (multiplication % 10) + '0';
  mul[0] = (multiplication / 10) + '0';
}

void addMissingDigit(char number[1000], char digit, int position) {
  char digitsSum[2];
  for(int j=position-1; j>=0; j--) {
    addTwoCharDigits(digitsSum, number[j], digit);
    number[j] = digitsSum[1];
    digit = digitsSum[0];
    if(digit == '0') {
      break;
    }
  }
}

void addCharNumbers(char sum[1000], char num1[1000], char num2[1000]) {
  char digitsSum[2];
  char tempDigit;
  for(int i=999; i>=0; i--) {
    addTwoCharDigits(digitsSum, num1[i], num2[i]);
    sum[i] = digitsSum[1];
    tempDigit = digitsSum[0];
    if(tempDigit != '0') {
      addMissingDigit(sum, tempDigit, i);
    }
  }
}

void doubleCharNumber(char result[1000], char number[1000]) {
  char mul[2];
  char totalToAdd[1000];
  initWithZeros(totalToAdd);
  for(int i=999; i>=0; i--) {
    doubleCharDigit(mul, number[i]);
    number[i] = mul[1];
    if(mul[0] != '0') {
      addMissingDigit(totalToAdd, mul[0], i);
    }
  }
  addCharNumbers(result, number, totalToAdd);
}

void main() {
  char result[1000];
  char tempResult[1000];
  initAsNumOne(result);
  initWithZeros(tempResult);

  for(int i=1; i<=N; i++) {
    swapArrays(result, tempResult);
    doubleCharNumber(result, tempResult);
  }

  long sumOfDigits = totalFromNumber(result);
  printf("Result: %ld", sumOfDigits);
}
