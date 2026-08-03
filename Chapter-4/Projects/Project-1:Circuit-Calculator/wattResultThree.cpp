#include <iostream>
using namespace std;

#include "wattResultThree.h"

void wattResultThree(int powerOption_three) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  double power {(voltage * voltage) / resistance};
  cout << "Power result of the circuit is " << power << " volts\n";
}
