#include <iostream>
#include <string>
using namespace std;

#include "universityName.h"

string universityName() {

  cout << "Which University did you attend?\n";            //Prompts user to type university name?
  string university {};
  cin >> university;
  getline(cin >> ws, university);
  return university;
}
