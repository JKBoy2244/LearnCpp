#include <iostream>
using namespace std;

#include "volts.h"

int volts(char voltage) {

  cout << "Since you choose voltage, choose the option below to continue as 1 (option 1). below is the only option\n";
  cout << "---------------------------------------------------------------------------------------------------------";
  cout << "1). V = IR\n";
  cout << "---------------------------------------------------------------------------------------------------------";

  int voltageOption {};
  cin >> voltageOption;

  if (voltageOption == 1) {

    int voltageOption_one = voltageOption;
    return voltageOption_one;
    
  }  else {
       cout << "Invalid input!\n";
  }
}
