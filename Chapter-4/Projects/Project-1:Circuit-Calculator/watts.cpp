#include <iostream>
using namespace std;

#include "watts.h"

int watts(char power) {

  cout << "Since you choose power, choose either option 1, 2, or 3 below to continue\n";
  cout << "---------------------------------------------------------------------------------------------------------";
  cout << "1). P = VI, 2). P = (I*I)*R, 3). P = (V*V)/R\n";
  cout << "---------------------------------------------------------------------------------------------------------";

  int powerOption {};
  cin >> powerOption;

  if (powerOption == 1) {

    int powerOption_one = powerOption;
    return powerOption_one;
  }  

  if (powerOption == 2) {

    int powerOption_two = powerOption;
    return powerOption_two;
  }  

  if (powerOption == 3) {

    int powerOption_three = powerOption;
    return powerOption_three;
  }  
}
