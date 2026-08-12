#include <iostream>
using namespace std;

#include "constants.h"
#include "optionalCount.h"

namespace option {
  int optionalCount() {

    cout << "How many option choices are you taking for GCSEs(maximum 6)?\n"
    const unsigned int optionCount {};
    cin >> optionCount;
    bool validCount {optionCount >= constants::minOptionCount && optionCount <= constants::maxOptionCount};
    int finalCount {(optionCount) ? optionCount : 0};
    return finalCount;

  } 
}
