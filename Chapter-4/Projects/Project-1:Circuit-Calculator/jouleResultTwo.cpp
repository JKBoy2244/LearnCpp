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

  cout << "Enter the time of the circuit\n";
  double time {};
  cin >> time;

  double energy {voltage * current * time};
  cout << "Energy result of the circuit is " << energy << " joules\n";
}
