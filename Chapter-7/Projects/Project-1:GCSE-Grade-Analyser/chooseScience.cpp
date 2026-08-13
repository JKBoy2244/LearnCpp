#include <iostream>
#include <string>
using namespace std;

#include "chooseScience.h"

namespace scienceChoose {
  string chooseScience() {

    cout << "Did you take triple science or combined science, type either triple or combined please (nothing else)?\n";
    string scienceOption {};
    cin >> scienceOption;
    if (scienceOption == "triple" || scienceOption == "combined") {
      return scienceOption;
    } else {
      return " ";
    }
  }
}
