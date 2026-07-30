#include <iostream>
using namespace std;

double firstYear() {

  cout << "Enter your first year grade to the nearest 2 d.p out of 100 please?\n";   //Prompts user to enter the first year result of university as a %
  double firstYearGrade {};
  cin >> firstYearGrade;
  return firstYearGrade;
}

double firstYearWeighted(double firstYearGrade) {

  double firstYearWeightedGrade {0.1 * firstYearGrade};
  cout << "Your first year weighted grade is " << firstYearWeightedGrade << "%\n";     //First year normally counts for 10% of the final grade
  return firstYearWeightedGrade;  
}

double secondYear() {

  cout << "Enter your second year grade to the nearest 2 d.p out of 100 please?\n";     //Prompts user to enter the second year result of university as a %
  double secondYearGrade {};
  cin >> secondYearGrade;
  return secondYearGrade;
}

double secondYearWeighted(double secondYearGrade) {

  double secondYearWeightedGrade {0.3 * secondYearGrade};
  cout << "Your second year weighted grade is " << secondYearWeightedGrade << "%\n";         //Second year normally counts for 10% of the final grade
  return secondYearWeightedGrade;  
}

double thirdYear() {

  cout << "Enter your third year grade to the nearest 2 d.p out of 100 please?\n";                //Prompts user to enter the third (final) year result of university as a %
  double thirdYearGrade {};
  cin >> thirdYearGrade;
  return thirdYearGrade;
}

double thirdYearWeighted(double thirdYearGrade) {

  double thirdYearWeightedGrade {0.6 * thirdYearGrade};
  cout << "Your third year weighted grade is " << thirdYearWeightedGrade << "%\n";                         //Third year normally counts for 10% of the final grade
  return thirdYearWeightedGrade;  
}

void final(double firstYearWeightedGrade, double secondYearWeightedGrade, double thirdYearWeightedGrade) {

  double finalUniversityGrade {firstYearWeightedGrade + secondYearWeightedGrade + thirdYearWeightedGrade};                      //Calculates the overall final score as a % using the combined weighted scores
  cout << "Your final university grade is " << finalUniversityGrade << "%\n";
}

int main() {

  double firstYearGrade = firstYear();
  double firstYearWeightedGrade = firstYearWeighted(firstYearGrade);                                    //Compiler runs the program here in sequential order
  double secondYearGrade = secondYear();
  double secondYearWeightedGrade = secondYearWeighted(secondYearGrade);
  double thirdYearGrade = thirdYear();
  double thirdYearWeightedGrade = thirdYearWeighted(thirdYearGrade);
  final(firstYearWeightedGrade, secondYearWeightedGrade, thirdYearWeightedGrade);
}
