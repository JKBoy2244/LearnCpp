#include <iostream>

#ifndef FIRSTYEAR
#define FIRSTYEAR

double firstYear() {

  cout << "Enter your first year grade to the nearest 2 d.p out of 100 please?\n";   //Prompts user to enter the first year result of university as a %
  double firstYearGrade {};
  cin >> firstYearGrade;
  return firstYearGrade;
}

#endif
