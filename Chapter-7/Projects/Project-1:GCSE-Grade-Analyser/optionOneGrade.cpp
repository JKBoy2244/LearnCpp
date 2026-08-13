#include <iostream>
#include <string>
using namespace std;

#include "constants.h"
#include "optionOneGrade.h"

namespace oneOption {
  int optionOneGrade(string optionOne) {

    cout << "Enter your GCSE " << optionOne << " grade?\n"; 
    [[maybe_unused]] static int optOneGrade {};
    cin >> optOneGrade;
    bool validOptOneGrade {optOneGrade >= constants::minGrade && optOneGrade <= constants::maxGrade};
    int finalOptOneGrade {(validOptOneGrade) ? optOneGrade : 0};
    return finalOptOneGrade;

  }
}
