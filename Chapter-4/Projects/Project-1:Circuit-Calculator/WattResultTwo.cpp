#include <iostream>
using namespace std;

#include "wattResultTwo.h";

void wattResultTwo(int powerOption_two) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  double power {current * current * resistance};
  cout << "Power result of the circuit is " << power << " volts\n";
}
