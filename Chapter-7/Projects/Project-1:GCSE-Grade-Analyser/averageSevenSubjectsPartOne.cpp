#include <iostream>
using namespace std;

#include "averageSevenSubjectsPartOne.h"

namespace averageSevenSubjectsOne {
  double averageSevenSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                   , int optionOneGrade, int optionTwoGrade) {

    static int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo + optionOneGrade + optionTwoGrade};
    double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
    return average;
  }
}
