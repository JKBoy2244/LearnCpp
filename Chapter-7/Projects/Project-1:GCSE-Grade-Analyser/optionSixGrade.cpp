#include <iostream>
#include <string>
using namespace std;

#include "constants.h"
#include "optionSubjectSix.h" 

namespace sixOption {
  int optionSixGrade(string optionSix) {

    cout << "Enter your GCSE " << optionSix << " grade?\n"; 
    [[maybe_unused]] static int optSixGrade {};
    cin >> optSixGrade;
    bool validOptSixGrade {optSixGrade >= constants::minGrade && optSixGrade <= constants::maxGrade};
    int finalOptSixGrade {(validOptSixGrade) ? optSixGrade : 0};
    return finalOptSixGrade;

 }
}
