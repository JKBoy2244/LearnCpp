#include <iostream>
using namespace std;

#include "jouleResultFour.h"

void jouleResultFour(int energyOption_four) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  cout << "Enter the time of the circuit in milliseconds in integer form\n";
  unsigned int time {};
  cin >> time;

  double energy {current * current * resistance * (static_cast<double>(time) / 1000)};
  cout << "Energy result of the circuit is " << energy << " joules\n";
}
