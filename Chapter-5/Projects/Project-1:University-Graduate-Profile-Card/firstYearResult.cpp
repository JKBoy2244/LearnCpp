#include <iostream>
#include <string>
using namespace std;

#include "firstYearResult.h"

double firstYearResult() {

  cout << "As a percentage to 2 d.p, what was your first year score out of 100?\n";
  double firstYearScore {};
  cin >> firstYearScore;
  bool firstValid { firstYearScore >= 0.00 and firstYearScore <= 100.00};

  if (!firstValid) {                                      //Asks user for first year result to calculate the weighting score for that year
    return 0.00;
  }

  return firstYearScore;
}
