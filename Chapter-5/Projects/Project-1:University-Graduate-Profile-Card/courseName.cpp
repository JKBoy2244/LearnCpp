#include <iostream>
#include <string>
using namespace std;

#include "courseName.h"

string courseName() {

  cout << "What course did you study?\n";            //Prompts user to type course name?
  string course {};
  cin >> course;
  string_view courseNameInput = course;
  return course;
}
