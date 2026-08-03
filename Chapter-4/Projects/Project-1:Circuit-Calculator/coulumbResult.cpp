#include <iostream>
using namespace std;

#include "coulumbResult.h"

void coulumbResult(int chargeOption_one) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the time of the circuit\n";
  unsigned int time {};
  cin >> time;

  double charge {current * static_cast<double>time};
  cout << "Charge result of the circuit is " << charge << " coulumbs\n";
}
