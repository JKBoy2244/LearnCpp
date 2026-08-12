#include <iostream>
using namespace std;

#include "constants.h" 
#include "combinedScienceGradeTwo.h"

namespace secondScienceCombinedGrade {
  int combinedScienceGradeTwo() {

    cout << "Enter your second GCSE combined science grade?\n";
    [[maybe_unused]] int scienceGradeTwo {};                                //This line is there to prevent the program from complaining that this variable isnt used if user decides to input 3 science grades instead of 2
    cin >> scienceGradeTwo;
    bool validScienceGradeTwo {scienceGradeTwo >= constants::minGrade && scienceGradeTwo <= constants::maxGrade};
    int finalScienceGradeTwo {(validScienceGradeTwo) ? scienceGradeTwo : 0};
    return finalscienceGradeTwo;

  }
}
