#include <iostream>
#include <string>
using namespace std;

#include "universityName.h"

string universityName() {

  cout << "Which University did you attend?\n";            //Prompts user to type university name?
  string university {};
  cin >> university;
  //string_view universityNameInput = university;
  return university;
}
