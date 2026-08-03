#include <iostream>
using namespace std;

#include "coulumbResult.h"

void coulumbResult(int chargeOption_one) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the time of the circuit\n";
  double time {};
  cin >> time;

  double charge {current * time};
  cout << "Charge result of the circuit is " << charge << " coulumbs\n";
}
