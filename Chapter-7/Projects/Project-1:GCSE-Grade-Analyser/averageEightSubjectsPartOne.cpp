#include <iostream>
using namespace std;

#include "averageEightSubjectsPartOne.h"

namespace averageEightSubjectsOne {
  double averageEightSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                   , int optionOneGrade, int optionTwoGrade, int optionThreeGrade) {

    int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo + optionOneGrade + optionTwoGrade + optionThreeGrade};
    double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
    return average;
 }
}
