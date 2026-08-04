#include <iostream>
#include <string>
using namespace std;

#include "finalScore.h"

double finalScore(double firstYearWeightingResult, double secondYearWeightingResult, double thirdYearWeightingResult) {

  double finalMark {firstYearWeightingResult + secondYearWeightingResult + thirdYearWeightingResult};
  return finalMark;
}
