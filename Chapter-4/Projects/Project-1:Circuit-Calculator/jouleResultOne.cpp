#include <iostream>
using namespace std;

#include "jouleResultOne.h"

void jouleResultOne(int energyOption_one) {

  cout << "Enter the power of the circuit\n";
  double power {};
  cin >> power;

  cout << "Enter the time of the circuit in milliseconds in integer form\n";
  unsigned int time {};
  cin >> time;

  double energy {power * (static_cast<double>(time) / 1000)};
  cout << "Energy result of the circuit is " << energy << " joules\n";
}
