#include <iostream>
#include <string>
using namespace std;

#include "thirdYearScale.h"

double thirdYearScale(double thirdYearScore) {

  constexpr double thirdYearWeighting {0.6};
  double thirdYearWeightingResult {thirdYearScore * thirdYearWeighting};                           //This calculation is used as third year accounts 60% of the whole course final grade
  return thirdYearWeightingResult;
}
