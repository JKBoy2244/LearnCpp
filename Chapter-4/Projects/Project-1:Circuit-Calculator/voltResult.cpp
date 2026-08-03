#include <iostream>
using namespace std;

#include "voltResult.h";

void voltResult(int voltageOption_one) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  double voltage {current * resistance};
  cout << "Voltage result of the circuit is " << voltage << " volts\n";
}
