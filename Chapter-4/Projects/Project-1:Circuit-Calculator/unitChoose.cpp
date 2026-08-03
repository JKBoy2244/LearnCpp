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
    char voltage = unit;     //If and only if voltage is chosen
    return voltage;
  }
 
  if (unit == 'I') {
    //current(unit);
    char current = unit;       //If and only if current is chosen
    return current;
  }
  
  if (unit == 'R') {
    //resistance(unit);
    char resistance = unit;            //If and only if resistance is chosen
    return resistance;
  }
  
  if (unit == 'P') {
    //power(unit);                       //If and only if power is chosen
    char power = unit;
    return power;
  }
    
  if (unit == 'T') {
    //time(unit);
    char time = unit;                   //If and only if time is chosen
    return time;
  }
  
  if (unit == 'E') {
    //energy(unit);
    char energy = unit;                  //If and only if energy is chosen
    return energy;
  }
  
  if (unit == 'Q') {
    //charge(unit);
    char charge = unit;                   //If and only if charge is chosen
    return charge;
  }  
}
