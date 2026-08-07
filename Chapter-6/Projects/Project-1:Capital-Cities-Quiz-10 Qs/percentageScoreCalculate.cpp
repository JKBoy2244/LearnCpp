#include <iostream>
using namespace std;

#include "percentageScoreCalculate.h"

double percentageScoreCalculate(int currentScore) {

  double percentage = ((static_cast<double>(currentScore)) / 10) * 100;
  return percentage;
}
