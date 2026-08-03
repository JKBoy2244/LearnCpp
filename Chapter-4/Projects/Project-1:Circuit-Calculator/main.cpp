#include <iostream>
using namespace std;

char optionCalculate() {

  cout << "Choose which 4 specific values you want to calculate here (the rest of the values you have to measure internally by yourself?\n";
  cout << "-------------------------------------------------------------------------------------------------------------------------------"\n";
  cout << "V = voltage, P = power, C = charge, E = energy";
  cout << "-------------------------------------------------------------------------------------------------------------------------------"\n";

  char optionLetter {};
  cin >> optionLetter;

  if (optionLetter == 'V') {

    char voltage = optionLetter;
    return voltage;
  }

  if (optionLetter == 'P') {

    char power = optionLetter;
    return power;
  }
  
  if (optionLetter == 'C') {

    char charge = optionLetter;
    return charge;
  }
  
  if (optionLetter == 'E') {

    char energy = optionLetter;
    return energy;
  }
}

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
  }  
}
