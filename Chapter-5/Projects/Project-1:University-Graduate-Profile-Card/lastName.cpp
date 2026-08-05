#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "lastName.h"

string lastName() {

  cout << "Tell me your last name (surname)?\n";            //Prompts user to type last name?
  string last {};
  cin >> last;
  string_view lastNameInput = last;
  return lastNameInput;
}
