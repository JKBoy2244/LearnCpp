#include <iostream>
using namespace std;

double firstYear();
double firstYear(double grade);                                                //All methods forward declaration
double secondYear();
double secondYear(double grade);
double thirdYear();
double thirdYear(double grade);
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
