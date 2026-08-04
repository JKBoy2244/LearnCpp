#include <iostream>
#include <string>
using namespace std;

#include "secondYearResult.h"

double secondYearResult() {

  cout << "As a percentage to 2 d.p, what was your second year score out of 100?\n";
  double secondYearScore {};
  cin >> secondYearScore;
  
  if (secondYearScore <= 0.00) {                                                             //Asks user for second year result to calculate the weighting score for that year
    return 0;
  }
  else if (secondYearScore > 100.00) {
    return 0;
  }

  return secondYearScore;
}
