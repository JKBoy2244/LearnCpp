#include <iostream>
#include <string>
using namespace std;

#include "firstName.h"
#include "lastName.h"
#include "universityName.h"
#include "courseName.h"
#include "firstYearResult.h"
#include "secondYearResult.h"
#include "thirdYearResult.h"
#include "firstYearScale.h"
#include "secondYearScale.h"
#include "thirdYearScale.h"

string firstName() {

  cout << "Tell me your first name?\n";      //Prompts user to type first name?
  string first {};
  cin >> first;
  string_view firstName_input = first;
  return firstName_input;
}

string lastName() {

  cout << "Tell me your last name (surname)?\n";            //Prompts user to type last name?
  string last {};
  cin >> last;
  string_view lastName_input = last;
  return lastName_input;
}

string universityName() {

  cout << "Which University did you attend?\n";            //Prompts user to type university name?
  string university {};
  cin >> university;
  string_view universityName_input = university;
  return universityName_input;
}

string courseName() {

  cout << "What course did you study?\n";            //Prompts user to type course name?
  string course {};
  cin >> course;
  string_view courseName_input = course;
  return courseName_input;
}

double firstYearResult() {

  cout << "As a percentage to 2 d.p, what was your first year score out of 100?\n";
  double firstYearScore {};
  cin >> firstYearScore;
  
  if (firstYearScore <= 0.00) {                                                             //Asks user for first year result to calculate the weighting score for that year
    return 0;
  }
  else if (firstYearScore > 100.00) {
    return 0;
  }

  return firstYearScore;
}

double secondYearResult() {

  cout << "As a percentage to 2 d.p, what was your second year score out of 100?\n";
  double secondYearScore {};
  cin >> secondYearScore;
  
  if (secondYearScore <= 0.00) {                                                             //Asks user for second year result to calculate the weighting score for that year
    return 0;
  }
  else if (secondYearScore > 100.00) {
    return 0;
  }

  return secondYearScore;
}

double thirdYearResult() {

  cout << "As a percentage to 2 d.p, what was your third year score out of 100?\n";
  double thirdYearScore {};
  cin >> thirdYearScore;
  
  if (thirdYearScore <= 0.00) {                                                             //Asks user for third year result to calculate the weighting score for that year
    return 0;
  }
  else if (thirdYearScore > 100.00) {
    return 0;
  }

  return thirdYearScore;
}

double firstYearScale(double firstYearScore) {

  constexpr double firstYearWeighting {0.1};
  double firstYearWeightingResult {firstYearScore * firstYearWeighting};                        //This calculation is used as first year accounts 10% of the whole course final grade
  return firstYearWeightingResult;
}

double secondYearScale(double secondYearScore) {

  constexpr double secondYearWeighting {0.1};
  double secondYearWeightingResult {secondYearScore * secondYearWeighting};                             //This calculation is used as second year accounts 30% of the whole course final grade
  return secondYearWeightingResult;
}

double thirdYearScale(double thirdYearScore) {

  constexpr double thirdYearWeighting {0.1};
  double thirdYearWeightingResult {thirdYearScore * thirdYearWeighting};                           //This calculation is used as third year accounts 60% of the whole course final grade
  return thirdYearWeightingResult;
}
