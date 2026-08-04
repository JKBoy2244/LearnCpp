#include <iostream>
#include <string>;
using namespace std;

#include "lastName.h";

string lastName() {

  cout << "Tell me your last name (surname)?\n";            //Prompts user to type last name?
  string last {};
  cin >> last;
  string_view lastName_input = last;
  return lastName_input;
}
