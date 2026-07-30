#include <iostream>
#include "firstYear.h"
using namespace std;

double firstYearWeighted(double firstYearGrade) {

  double firstYearWeightedGrade {0.1 * firstYearGrade};
  cout << "Your first year weighted grade is " << firstYearWeightedGrade << "%\n";     //First year normally counts for 10% of the final grade
  return firstYearWeightedGrade;  
}
