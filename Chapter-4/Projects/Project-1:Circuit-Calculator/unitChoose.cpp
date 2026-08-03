#include <iostream>
using namespace std;

#include "unitChoose.h";

char unitChoose() {

  cout << "Choose a specific unit you want to calculate for the circuit below with the correct respective letters?\n";
  cout << "--------------------------------------------------------------------------------------------------------\n";    //Prompts user to choose a value that wants to be calculated??
  cout << " V = voltage, I = current, R = resistance, P = power, T = time, E = energy, Q = charge\n";
  cout << "--------------------------------------------------------------------------------------------------------\n";

  char unit{};
  cin >> unit;

  if (unit == 'V') {
    //volts(unit);
    char voltage = unit;
    return voltage;
  }
 
  if (unit == 'I') {
    //current(unit);
    char current = unit;
    return current;
  }
  
  if (unit == 'R') {
    //resistance(unit);
    char resistance = unit;
    return resistance;
  }
  
  if (unit == 'P') {
    //power(unit);
    char power = unit;
    return power;
  }
    
  if (unit == 'T') {
    //time(unit);
    char time = unit;
    return time;
  }
  
  if (unit == 'E') {
    //energy(unit);
    char energy = unit;
    return energy;
  }
  
  if (unit == 'Q') {
    //charge(unit);
    char charge = unit;
    return charge;
  }  
}
