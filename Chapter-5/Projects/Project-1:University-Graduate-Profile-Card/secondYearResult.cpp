#include <iostream>
#include <string>
using namespace std;

#include "secondYearResult.h"

double secondYearResult() {

  cout << "As a percentage to 2 d.p, what was your second year score out of 100?\n";
  double secondYearScore {};
  cin >> secondYearScore;
  bool secondValid { secondYearScore >= 0.00 and secondYearScore <= 100.00);

  if (!secondValid) {                                      //Asks user for second year result to calculate the weighting score for that year
    return 0.00;
  }

  return secondYearScore;
}
