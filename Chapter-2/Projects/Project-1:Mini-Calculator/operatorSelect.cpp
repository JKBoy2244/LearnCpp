#include <iostream>
using namespace std;

char operatorSelect() {

  cout << "Choose an operator sign from either: +, -, /, * "; //Prompts the user to enter an operator character
  char sign{};
  cin >> sign;
  return sign;
}
