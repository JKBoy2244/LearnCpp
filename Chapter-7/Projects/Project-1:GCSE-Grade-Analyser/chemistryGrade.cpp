#include <iostream>
using namespace std;

#include "constants.h" 
#include "chemistryGrade.h"

namespace chemistry {
  int chemistryGrade() {

    cout << "Enter your GCSE chemistry grade?\n"; 
    [[maybe_unused]] static int chemistryGrade {};
    cin >> chemistryGrade;
    bool validChemistryGrade {chemistryGrade >= constants::minGrade && chemistryGrade <= constants::maxGrade};
    int finalChemistryGrade {(validChemistryGrade) ? chemistryGrade : 0};
    return finalChemistryGrade;

  }
}
