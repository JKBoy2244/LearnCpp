#include <iostream>

#ifndef THIRDYEAR
#define THIRDYEAR

double thirdYear() {

  cout << "Enter your third year grade to the nearest 2 d.p out of 100 please?\n";                //Prompts user to enter the third (final) year result of university as a %
  double thirdYearGrade {};
  cin >> thirdYearGrade;
  return thirdYearGrade;
}

#endif
