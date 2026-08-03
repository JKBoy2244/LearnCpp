#include <iostream>
using namespace std;

#include "optionCalculate.h";

char optionCalculate() {

  cout << "Choose which 4 specific values you want to calculate here (the rest of the values you have to measure internally by yourself?\n";
  cout << "-------------------------------------------------------------------------------------------------------------------------------"\n";
  cout << "V = voltage, P = power, C = charge, E = energy";
  cout << "-------------------------------------------------------------------------------------------------------------------------------"\n";

  char optionLetter {};
  cin >> optionLetter;

  if (optionLetter == 'V') {

    voltage = optionLetter;
    return voltage;
  }

  if (optionLetter == 'P') {

    power = optionLetter;
    return power;
  }
  
  if (optionLetter == 'C') {

    charge = optionLetter;
    return charge;
  }
  
  if (optionLetter == 'E') {

    energy = optionLetter;
    return energy;
  }
}

