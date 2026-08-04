#include <iostream>
#include <string>
using namespace std;

#include "firstName.h"

string firstName() {

  cout << "Tell me your first name?\n";      //Prompts user to type first name?
  string first {};
  cin >> first;
  string_view firstNameInput = first;
  return firstNameInput;
}
