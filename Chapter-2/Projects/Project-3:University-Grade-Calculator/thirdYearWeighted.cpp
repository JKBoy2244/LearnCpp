#include <iostream>
#include "thirdYear.h"
using namespace std;

double thirdYearWeighted(double thirdYearGrade) {

  double thirdYearWeightedGrade {0.6 * thirdYearGrade};
  cout << "Your third year weighted grade is " << thirdYearWeightedGrade << "%\n";                         //Third year normally counts for 10% of the final grade
  return thirdYearWeightedGrade;  
}
