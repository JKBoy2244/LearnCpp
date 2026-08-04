#include <iostream>
#include <string>
using namespace std;

#include "firstName.h";
#include "lastName.h";
#include "universityName.h";
#include "courseName.h";

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

