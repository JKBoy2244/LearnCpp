#include <iostream>
using namespace std;

#include "readyMenu.h"

namespace Menu {
  char readyMenu() {

    cout << "Welcome to the 4 digit random number generator game. This game you will have 20 chances to guess the number I am thinking off and along the way we give hints but at maximum 5 along the way\n";
    cout << "You start with 1000 points but every time you get a guess wrong which is extremely likely at least, you lose 40 points each time\n";
    cout << "But, don't worry because this is meant to be a deliberately challenging game which is the point\n";
    cout << "Are you ready to play though (please type 'y' or 'n' and lowercase specific)\n";
    char ready {};
    cin >> ready;
    return ready;
  }
}
