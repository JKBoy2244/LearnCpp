#include <iostream>
using namespace std;

#include "joules.h";

int joules(char energy) {

  cout << "Since you choose energy, choose either option 1, 2, 3, 4 or 5 below to continue\n";
  cout << "---------------------------------------------------------------------------------------------------------";
  cout << "1). P = VI, 2). P = (I*I)*R, 3). P = (V*V)/R\n";
  cout << "---------------------------------------------------------------------------------------------------------";

  int energyOption {};
  cin >> energyOption;

  if (energyOption == 1) {

    int energyOption_one = energyOption;
    return energyOption_one;
  }  

  if (energyOption == 2) {

    int energyOption_two = energyOption;
    return energyOption_two;
  } 

  if (energyOption == 3) {

    int energyOption_three = energyOption;
    return energyOption_three;
  }

  if (energyOption == 4) {

    int energyOption_four = energyOption;
    return energyOption_four;
  }

  if (energyOption == 5) {

    int energyOption_five = energyOption;
    return energyOption_five;
  }
}
