#include <iostream>
#ifndef SECONDYEAR
#define SECONDYEAR

double secondYear() {

  cout << "Enter your second year grade to the nearest 2 d.p out of 100 please?\n";     //Prompts user to enter the second year result of university as a %
  double secondYearGrade {};
  cin >> secondYearGrade;
  return secondYearGrade;
}

#endif
