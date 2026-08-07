#include <iostream>
using namespace std;

#include "percentageScoreCalculate.h"

double percentageScoreCalculate(int currentScore) {

  double percentage = ((static_cast<double>(currentScore)) / 10) * 100;        //Calculates score to a percentage
  return percentage;
}
