#include <iostream>
using namespace std;

#include volts.h

int volts(char voltage) {

  cout << "Since you chose voltage, choose each option and tell me what equations below you want to use and state clearly anywhere from 1 to 6 as options?\n";
  cout << "-----------------------------------------------------------------------------------------------";
  cout << "1). V = IR, 2). P = VI 3). P = (V*V)/R 4). E = VIT 5). E= QV 6). E = [(V*V)*t] / R\n";
  cout << "-----------------------------------------------------------------------------------------------";

  int voltOption {};
  cin >> voltOption;

  if (voltOption == 1) {

    int voltOption_one = voltOption;
    return voltOption_one;
  }

  if (voltOption == 2) {

    int voltOption_two = voltOption;
    return voltOption_two;
  }

  if (voltOption == 3) {

    int voltOption_three = voltOption;
    return voltOption_three;
  }

  if (voltOption == 4) {

    int voltOption_four = voltOption;
    return voltOption_four;
  }

  if (voltOption == 5) {

    int voltOption_five = voltOption;
    return voltOption_five;
  }

  if (voltOption == 6) {

    int voltOption_six = voltOption;
    return voltOption_six;
  }
}
