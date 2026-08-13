#include <iostream>
using namespace std;

#include "constants.h"
#include "optionalCount.h"

namespace option {
  int optionalCount() {

    cout << "How many option choices are you taking for GCSEs(maximum 6)?\n";
    unsigned int optionCount {};
    cin >> optionCount;
    [[maybe_unused]] bool validCount {optionCount >= constants::minOptionCount && optionCount <= constants::maxOptionCount};
    int finalCount {static_cast<int>((optionCount) ? optionCount : 0)};
    return finalCount;

  } 
}
