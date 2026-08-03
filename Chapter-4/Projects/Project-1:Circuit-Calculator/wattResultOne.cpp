#include <iostream>
using namespace std;

#include "wattResultOne.h"

void wattResultOne(int powerOption_one) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  double power {current * voltage};
  cout << "Power result of the circuit is " << power << " watts\n";
}
