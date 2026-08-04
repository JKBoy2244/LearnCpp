#include <iostream>
#include <string>
using namespace std;

#include "firstYearScale.h"

double firstYearScale(double firstYearScore) {

  constexpr double firstYearWeighting {0.1};
  double firstYearWeightingResult {firstYearScore * firstYearWeighting};                        //This calculation is used as first year accounts 10% of the whole course final grade
  return firstYearWeightingResult;
}
