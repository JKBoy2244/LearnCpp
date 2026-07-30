#include <iostream>
using namespace std;

void final(double firstYearWeightedGrade, double secondYearWeightedGrade, double thirdYearWeightedGrade) {

  double finalUniversityGrade {firstYearWeightedGrade + secondYearWeightedGrade + thirdYearWeightedGrade};                      //Calculates the overall final score as a % using the combined weighted scores
  cout << "Your final university grade is " << finalUniversityGrade << "%\n";
}
