#include <iostream>
using namespace std;

//V = IR, P = I2R, E = VIT, Q = It, E = Q x V, E = Q x I x R, E = I X t X V, E = I2T

char unitChoose() {

  cout << "Choose a specific unit you want to calculate for the circuit below with the correct respective letters?\n";
  cout << "--------------------------------------------------------------------------------------------------------\n";
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
