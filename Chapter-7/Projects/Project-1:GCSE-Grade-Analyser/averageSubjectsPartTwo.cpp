#include <iostream>
using namespace std;

#include "averageSubjectsPartTwo.h" 

namespace averageSubjectsTwo {
  double averageSubjectsPartTwo(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalBiologyGrade, int finalChemistryGrade,
                              int finalPhysicsGrade, int optionOneGrade, int optionTwoGrade, int optionThreeGrade, int optionFourGrade, int optionFiveGrade, int optionSixGrade) {

    if (finalCount == 6) {
       int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade};
       double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
       return average;
    }  

    if (finalCount == 7) {
       int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade + optionOneGrade};
       double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
       return average;
    }  

    if (finalCount == 8) {
       int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade};
       double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
       return average;
    }  

    if (finalCount == 9) {
       int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade + optionThreeGrade};
       double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
       return average;
    }  

    if (finalCount == 10) {
       int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade};
       double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
       return average;
    }  

    if (finalCount == 11) {
       int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade + optionFiveGrade};
       double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
       return average;
    }  

    if (finalCount == 12) {
       int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade + optionFiveGrade + optionSixGrade};
       double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
       return average;
    }
  }
}
