#include <iostream>
using namespace std;

#include "combinedScienceGradeTwo.h"

namespace secondScienceCombinedGrade {
  int combinedScienceGradeTwo() {

    cout << "Enter your second GCSE combined science grade?\n";
    [[maybe_unused]] int scienceGradeTwo {};
    cin >> scienceGradeTwo;
    bool validScienceGradeTwo {scienceGradeTwo >= constants::minGrade && scienceGradeTwo <= constants::maxGrade};
    int finalScienceGradeTwo {(validScienceGradeTwo) ? scienceGradeTwo : 0};
    return finalscienceGradeTwo;

  }
}
