#include <iostream>
using namespace std;

#include "constants.h" 
#include "biologyGrade.h"

namespace biology {
  int biologyGrade() {

    cout << "Enter your GCSE biology grade?\n"; 
    [[maybe_unused]] static int biologyGrade {};
    cin >> biologyGrade;
    bool validBiologyGrade {biologyGrade >= constants::minGrade && biologyGrade <= constants::maxGrade};
    int finalBiologyGrade {(validBiologyGrade) ? biologyGrade : 0};
    return finalBiologyGrade;

 }
}
