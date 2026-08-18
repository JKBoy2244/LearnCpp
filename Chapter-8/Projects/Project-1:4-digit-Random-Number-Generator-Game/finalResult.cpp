#include <iostream>
#include <string_view>
using namespace std;

#include "finalResult.h"

inline namespace Result {
  void finalResult(int points, string_view medal) {

    cout << "You scored " << points << " this round so hence you receive the " << medal << " award!\n";
    cout << "Boundaries: 880 points = platinum, 680 points = gold, 480 points = silver, 300 points = bronze and < 300 = participation!\n";
  }
}
