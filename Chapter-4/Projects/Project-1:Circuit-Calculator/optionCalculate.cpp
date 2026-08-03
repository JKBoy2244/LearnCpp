#include <iostream>
using namespace std;

#include "optionCalculate.h"

char optionCalculate() {

  cout << "Choose which 4 specific values you want to calculate here (the rest of the values you have to measure internally by yourself?\n";
  cout << "-------------------------------------------------------------------------------------------------------------------------------\n";
  cout << "V = voltage, P = power, C = charge, E = energy\n";
  cout << "-------------------------------------------------------------------------------------------------------------------------------\n";

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

