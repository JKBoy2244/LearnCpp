#include <iostream>
#include <string>
using namespace std;

#include "constants.h"
#include "optionTwoGrade.h"

namespace twoOption {

  int optionTwoGrade(string optionTwo) {

    cout << "Enter your GCSE " << optionTwo << " grade?\n"; 
    [[maybe_unused]] static int optTwoGrade {};
    cin >> optTwoGrade;
    bool validOptTwoGrade {optTwoGrade >= constants::minGrade && optTwoGrade <= constants::maxGrade};
    int finalOptTwoGrade {(validOptTwoGrade) ? optTwoGrade : 0};
    return finalOptTwoGrade; 

 }
}
