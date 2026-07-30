#include <iostream>
using namespace std;

double firstYear();
double firstYearWeighted(double grade);                                                //All methods forward declaration
double secondYear();
double secondYearWeighted(double grade);
double thirdYear();
double thirdYearWeighted(double grade);
void final(double first, double second, double third);


int main() {

  double firstYearGrade = firstYear();
  double firstYearWeightedGrade = firstYear(firstYearGrade);                                    //Compiler runs the program here in sequential order
  double secondYearGrade = secondYear();
  double secondYearWeightedGrade = secondYear(secondYearGrade);
  double thirdYearGrade = thirdYear();
  double thirdYearWeightedGrade = thirdYear(thirdYearGrade);
  final(firstYearWeightedGrade, secondYearWeightedGrade, thirdYearWeightedGrade);
}
