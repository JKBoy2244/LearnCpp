#include <iostream>
#include <string>
using namespace std;

#include "secondYearScale.h"

double secondYearScale(double secondYearScore) {

  constexpr double secondYearWeighting {0.3};
  double secondYearWeightingResult {secondYearScore * secondYearWeighting};                             //This calculation is used as second year accounts 30% of the whole course final grade
  return secondYearWeightingResult;
}
