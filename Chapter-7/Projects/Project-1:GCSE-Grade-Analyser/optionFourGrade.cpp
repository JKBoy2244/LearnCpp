#include <iostream>
#include <string>
using namespace std;

#include "constants.h"
#include "optionSubjectFour.h" 

namespace fourOption {
  int optionFourGrade(string optionFour) {

    cout << "Enter your GCSE " << optionFour << " grade?\n"; 
    [[maybe_unused]] int optFourGrade {};
    cin >> optFourGrade;
    bool validOptFourGrade {optFourGrade >= constants::minGrade && optFourGrade <= constants::maxGrade};
    int finalOptFourGrade {(validOptFourGrade) ? optFourGrade : 0};
    return finalOptFourGrade; 

  }
}
