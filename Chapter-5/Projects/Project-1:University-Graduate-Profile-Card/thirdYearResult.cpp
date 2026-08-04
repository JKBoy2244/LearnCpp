#include <iostream>
#include <string>
using namespace std;

#include "thirdYearResult.h"

double thirdYearResult() {

  cout << "As a percentage to 2 d.p, what was your third year score out of 100?\n";
  double thirdYearScore {};
  cin >> thirdYearScore;
  
  if (thirdYearScore <= 0.00) {                                                             //Asks user for third year result to calculate the weighting score for that year
    return 0;
  }
  else if (thirdYearScore > 100.00) {
    return 0;
  }

  return thirdYearScore;
}
