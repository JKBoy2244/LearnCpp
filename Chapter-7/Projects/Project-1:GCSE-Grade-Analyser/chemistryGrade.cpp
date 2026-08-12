#include <iostream>
using namespace std;

#include "chemistryGrade.h"

namespace chemistry {
  int chemistryGrade() {

    cout << "Enter your GCSE chemistry grade?\n"; 
    [[maybe_unused]] int chemistryGrade {};
    cin >> chemistryGrade;
    bool validChemistryGrade {chemistryGrade >= constants::minGrade && chemistryGrade <= constants::maxGrade};
    int finalChemistryGrade {(validChemistryGrade) ? chemistryGrade : 0};
    return finalChemistryGrade;

  }
}
