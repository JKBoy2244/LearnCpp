#include <iostream>
using namespace std;

#include "jouleResultTwo.h"

void jouleResultTwo(int energyOption_two) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the time of the circuit in milliseconds in integer form\n";
  unsigned int time {};
  cin >> time;

  double energy {voltage * current * (static_cast<double>(time) / 1000)};
  cout << "Energy result of the circuit is " << energy << " joules\n";
}
