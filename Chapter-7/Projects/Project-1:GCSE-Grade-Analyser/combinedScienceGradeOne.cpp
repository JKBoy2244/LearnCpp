#include <iostream>
using namespace std;

#include "constants.h"
#include "combinedScienceGradeOne.h"

namespace firstScienceCombinedGrade {
  int combinedScienceGradeOne() {

    cout << "Enter your first GCSE combined science grade?\n";
    [[maybe_unused]] static int scienceGradeOne {};
    cin >> scienceGradeOne;
    bool validScienceGradeOne {scienceGradeOne >= constants::minGrade && scienceGradeOne <= constants::maxGrade};
    int finalScienceGradeOne {(validScienceGradeOne) ? scienceGradeOne : 0};
    return finalScienceGradeOne;

 } 
}
