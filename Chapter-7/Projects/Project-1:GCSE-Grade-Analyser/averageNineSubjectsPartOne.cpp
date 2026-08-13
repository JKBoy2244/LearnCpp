#include <iostream>
using namespace std;

#include "averageNineSubjectsPartOne.h"

namespace averageNineSubjectsOne {
  double averageNineSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                  , int optionOneGrade, int optionTwoGrade, int optionThreeGrade, int optionFourGrade) {

    int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo
                  + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade};
    double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
    return average;
 }
}
