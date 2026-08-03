#include <iostream>
using namespace std;

#include "jouleResultThree.h"

void jouleResultThree(int energyOption_three) {

  cout << "Enter the voltage of the circuit\n";
  double voltage {};
  cin >> voltage;

  cout << "Enter the charge of the circuit\n";
  double charge {};
  cin >> charge;

  double energy {charge * voltage};
  cout << "Energy result of the circuit is " << energy << " joules\n";
}
