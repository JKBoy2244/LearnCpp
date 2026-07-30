#include <iostream>
using namespace std;

#include "secondYear.h"

double secondYear(double secondYearGrade) {

  double secondYearWeightedGrade {0.3 * secondYearGrade};
  cout << "Your second year weighted grade is " << secondYearWeightedGrade << "%\n";         //Second year normally counts for 10% of the final grade
  return secondYearWeightedGrade;  
}
