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
#include "finalScore.h"
#include "classification.h"
#include "internships.h"
#include "fullProfileCard.h"

/*

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

  constexpr double secondYearWeighting {0.3};
  double secondYearWeightingResult {secondYearScore * secondYearWeighting};                             //This calculation is used as second year accounts 30% of the whole course final grade
  return secondYearWeightingResult;
}

double thirdYearScale(double thirdYearScore) {

  constexpr double thirdYearWeighting {0.6};
  double thirdYearWeightingResult {thirdYearScore * thirdYearWeighting};                           //This calculation is used as third year accounts 60% of the whole course final grade
  return thirdYearWeightingResult;
}

double finalScore(double firstYearWeightingResult, double secondYearWeightingResult, double thirdYearWeightingResult) {

  double finalMark {firstYearWeightingResult + secondYearWeightingResult + thirdYearWeightingResult};
  return finalMark;
}

string classification(double finalMark) {

   if (finalMark >= 70.0) {

      string finalGrade = "First Class";
      return finalGrade;
   }

   else if (finalMark >= 60.0 and finalMark < 70.0) {                              //Classifying final marks into the respective grades

     string finalGrade = "Upper Second Class Honours";
     return finalGrade;
   }

   else if (finalMark >= 50.0 and finalMark < 50.0) {

     string finalGrade = "Lower Second Class Honours";
     return finalGrade;
   }

  else if (finalMark >= 40.0 and finalMark < 50.0) {

     string finalGrade = "Third Class Honours";
     return finalGrade;
   }

  else {
 
     string finalGrade = "Fail";
     return finalGrade;
  }
}

int internships() {

  cout << "How many internships did you complete during your 3 years of undergraduate at university?\n";   //Prompts user to display number of completed internships
  int internshipCount {};
  cin >> internshipCount;
  const int internshipNumber = internshipCount;

  if (internshipNumber < 0) {
    return 0;
  }

  return internshipNumber;
}

void fullProfileCard(string_view firstNameInput, string_view lastNameInput, string_view universityNameInput, string_view courseNameInput, double firstYearScore, double secondYearScore, double thirdYearScore, double firstYearWeightingResult,
double secondYearWeightingResult, double thirdYearWeightingResult, double finalMark, string finalGrade, int internshipNumber) {

   cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
   cout << "UNIVERSITY STUDENT GRADUATE PROFILE CARD!\n";
   cout << "-------------------------------------------";
   cout << "First name : " << firstNameInput << endl;
   cout << "Last name : " << lastNameInput << endl;
   cout << "University name : " << universityNameInput << endl;
   cout << "Course name : " << courseNameInput << endl;
   cout << "First year result : " << firstYearScore << "% -> " << firstYearWeightingResult << "/10\n";
   cout << "Second year result : " << secondYearScore << "% -> " << secondYearWeightingResult << "/30\n";
   cout << "Third year result : " << thirdYearScore << "% -> " << thirdYearWeightingResult << "/60\n";
   cout << "Final Score : " << finalMark << "% -> " << finalGrade << endl;
   cout << "Number of internships completed : " << internshipNumber << endl;
   cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}

*/

int main() {

  string first = firstName();
  string last = lastName();
  string university = universityName();
  string course = courseName();
  double firstScore = firstYearResult();
  double secondScore = secondYearResult();
  double thirdScore = thirdYearResult();
  double firstScale = firstYearScale(firstScore);
  double secondScale = secondYearScale(secondScore);
  double thirdScale = thirdYearScale(thirdScore);
  double totalScore = finalScore(firstScale, secondScale, thirdScale);
  double grade = classification(totalScore);
  int internshipTotal = internships();
  fullProfileCard(first, last, university, course, firstScore, secondScore, thirdScore, firstScale, secondScale, thirdScale, totalScore, grade, internshipTotal);
  
  return 0;
}

