#include <iostream>
using namespace std;

#include "averageSixSubjectsPartOne.h"

namespace averageSixSubjectsOne {
  double averageSixSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo, int optionOneGrade) {

    static int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo + optionOneGrade};
    double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
    return average;
    
  }
}
