#include <iostream>
using namespace std;

#include "averageFiveSubjectsPartOne.h"

namespace averageFiveSubjectsOne {
  double averageFiveSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo) {

    int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo};
    double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
    return average;

  }
}
