#include <iostream>
#include <string>
using namespace std;

#include "constants.h"
#include "optionSubjectFive.h" 

namespace fiveOption {
  int optionFiveGrade(string optionFive) {

    cout << "Enter your GCSE " << optionFive << " grade?\n"; 
    [[maybe_unused]] int optFiveGrade {};
    cin >> optFiveGrade;
    bool validOptFiveGrade {optFiveGrade >= constants::minGrade && optFiveGrade <= constants::maxGrade};
    int finalOptFiveGrade {(validOptFiveGrade) ? optFiveGrade : 0};
    return finalOptFiveGrade; 

 }
}
