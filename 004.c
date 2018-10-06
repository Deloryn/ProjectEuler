#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char* str, int len) {
  int i = 0;
  int j = len-1;
  while(i<j)
  {
    if(str[i]!=str[j]) return false;
    i += 1;
    j -= 1;
  }
  return true;
}

int len(int number) {
  int result = 0;
  while(number>0) {
    result += 1;
    number /= 10;
  }
  return result;
}

int main() {
  char str[6];
  int largestPalindromeNumber = 0;
  int currentNumber = 0;
  for(int i=100; i<=999; i++)
  {
    for(int j=100; j<=999; j++)
    {
      currentNumber = i*j;
      sprintf(str, "%d", currentNumber);
      if(isPalindrome(str, len(currentNumber))) {
        if(currentNumber > largestPalindromeNumber)
          largestPalindromeNumber = currentNumber;
      }
    }
  }
  printf("%d", largestPalindromeNumber);
}
