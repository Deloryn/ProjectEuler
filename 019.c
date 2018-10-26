#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year) {
  if((year-1900)%4 == 0) return true;
  else return false;
}

int monthToDays(int year, int month) {
  if(month == 2) {
    if(isLeapYear(year)) return 29;
    else return 28;
  }
  switch(month) {
    case 4:
      return 30;
    case 6:
      return 30;
    case 9:
      return 30;
    case 11:
      return 30;
    default:
      return 31;
  }
}

void main() {
  int numOfDayName = 2; // 1 - Monday, 2 - Tuesday, 3 - Wednesday etc.
  int sundaysOnFirst = 0;
  for(int year=1901; year<=2000; year++) {
    for(int month=1; month<=12; month++) {
      for(int day=1; day<=monthToDays(year, month); day++) {
        if(numOfDayName == 7 && day == 1) {
          sundaysOnFirst += 1;
        }
        numOfDayName += 1;
        if(numOfDayName == 8) numOfDayName = 1;
      }
    }
  }
  printf("Result: %d", sundaysOnFirst);
}
