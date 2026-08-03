#include <iostream>
using namespace std;

#include "jouleResultFive.h"

void jouleResultFive(int energyOption_five) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  cout << "Enter the time of the circuit\n";
  unsigned int time {};
  cin >> time;

  double energy {(voltage * voltage * static_cast<double>time) / resistance};
  cout << "Energy result of the circuit is " << energy << " joules\n";
}
