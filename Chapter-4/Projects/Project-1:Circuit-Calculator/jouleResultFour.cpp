#include <iostream>
using namespace std;

#include "jouleResultFour.h";

void jouleResultFour(int energyOption_four) {

  cout << "Enter the current of the circuit\n";
  double current {};
  cin >> current;

  cout << "Enter the resistance of the circuit\n";
  double resistance {};
  cin >> resistance;

  cout << "Enter the time of the circuit\n";
  double time {};
  cin >> time;

  double energy {current * current * resistance * time};
  cout << "Energy result of the circuit is " << energy << " joules\n";
}
