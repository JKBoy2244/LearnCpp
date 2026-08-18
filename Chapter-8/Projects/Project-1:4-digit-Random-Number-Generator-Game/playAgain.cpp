#include <iostream>
#include <string>
using namespace std;

#include "playAgain.h"

namespace Replay {
  string playAgain() {

    cout << "Do you want to play again or quit(yes = play again, no = quit) and please please type only yes or no all lowercase?\n";
    string play {};
    getline(cin, play);
    return play;
  }
}
