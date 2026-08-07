#include <iostream>
using namespace std;

#include "percentageScoreCalculate.h"

double percentageScoreCalculate(int currentScore) {

  constexpr int maxPercentage = 100;
  double percentage = ((static_cast<double>(currentScore)) / 10) * maxPercentage;        //Calculates score to a percentage
  return percentage;
}
