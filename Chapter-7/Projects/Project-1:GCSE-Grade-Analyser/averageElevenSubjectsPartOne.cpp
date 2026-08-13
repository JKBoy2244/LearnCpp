#include <iostream>
using namespace std;

#include "averageElevenSubjectsPartOne.h"

namespace averageElevenSubjectsOne {
  double averageElevenSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                    , int optionOneGrade, int optionTwoGrade, int optionThreeGrade, int optionFourGrade, int optionFiveGrade, int optionSixGrade) {

    static int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo
                   + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade + optionFiveGrade + optionSixGrade};
    double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
    return average;
  }
}
