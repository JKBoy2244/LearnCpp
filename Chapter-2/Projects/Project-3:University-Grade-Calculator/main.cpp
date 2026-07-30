#include <iostream>
using namespace std;

int main() {

  double firstYearGrade = firstYear();
  double firstYearWeightedGrade = firstYearWeighted(firstYearGrade);                                    //Compiler runs the program here in sequential order
  double secondYearGrade = secondYear();
  double secondYearWeightedGrade = secondYearWeighted(secondYearGrade);
  double thirdYearGrade = thirdYear();
  double thirdYearWeightedGrade = thirdYearWeighted(thirdYearGrade);
  final(firstYearWeightedGrade, secondYearWeightedGrade, thirdYearWeightedGrade);
}
