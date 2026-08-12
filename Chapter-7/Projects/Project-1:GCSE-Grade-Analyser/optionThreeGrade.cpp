#include <iostream>
#include <string>
namespace std;

#include "constants.h"
#include "optionSubjectThree.h" 

namespace threeOption {
  int optionThreeGrade(string optionThree) {

    cout << "Enter your GCSE " << optionThree << " grade?\n"; 
    [[maybe_unused]] int optThreeGrade {};
    cin >> optThreeGrade;
    bool validOptThreeGrade {optThreeGrade >= constants::minGrade && optThreeGrade <= constants::maxGrade};
    int finalOptThreeGrade {(validOptThreeGrade) ? optThreeGrade : 0};
    return finalOptThreeGrade;  

 }
}
