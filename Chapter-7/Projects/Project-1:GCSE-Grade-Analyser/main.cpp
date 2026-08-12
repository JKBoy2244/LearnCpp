#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "constants.h"                 //for constants::minGrade and constants::maxGrade
#include "mathsGrade.h"                 //for mathematics::mathsGrade
#include "englishLanguageGrade.h"      //for englishLanguage::englishLanguageGrade
#include "englishLiteratureGrade.h"      //for englishLiterature::englishLiteratureGrade
#include "chooseScience.h"                 //for scienceChoose::chooseScience
#include "combinedScienceGradeOne.h"     //for firstScienceCombinedGrade::combinedScienceGradeOne
#include "combinedScienceGradeTwo.h"      //for secondScienceCombinedGrade::combinedScienceGradeTwo

int mathsGrade() {

  cout << "Enter your GCSE mathematics grade?\n"; 
  int mathGrade {};
  cin >> mathGrade;
  bool validMathGrade {mathGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
  int finalMathGrade {(validMathGrade) ? mathGrade : 0};
  return finalMathGrade;

}

int englishLanguageGrade() {

  cout << "Enter your GCSE english language grade?\n";
  int LanguageGrade {};
  cin >> LanguageGrade;
  bool validLanguageGrade {LanguageGrade >= constants::minGrade && LanguageGrade <= constants::maxGrade};
  int finalLanguageGrade {(validLanguageGrade) ? LanguageGrade : 0};
  return finalLanguageGrade;

}

int englishLiteratureGrade() {

  cout << "Enter your GCSE english literature grade?\n";
  int LiteratureGrade {};
  cin >> LiteratureGrade;
  bool validLiteratureGrade {LiteratureGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
  int finalLiteratureGrade {(validLiteratureGrade) ? LiteratureGrade : 0};
  return finalLiteratureGrade;

}

string chooseScience() {

  cout << "Did you take triple science or combined science, type either triple or combined please (nothing else)?\n";
  string scienceOption {};
  cin >> scienceOption;
  if (scienceOption == "triple" || scienceOption == "combined") {
    return scienceOption;
  } else {
    return 0;
  }
}

int combinedScienceGradeOne() {

  cout << "Enter your first GCSE combined science grade?\n";
  [[maybe_unused]] int scienceGradeOne {};
  cin >> scienceGradeOne;
  bool validScienceGradeOne {scienceGradeOne >= constants::minGrade && scienceGradeOne <= constants::maxGrade};
  int finalScienceGradeOne {(validscienceGradeOne) ? scienceGradeOne : 0};
  return finalscienceGradeOne;

}

int combinedScienceGradeTwo() {

  cout << "Enter your second GCSE combined science grade?\n";
  [[maybe_unused]] int scienceGradeTwo {};
  cin >> scienceGradeTwo;
  bool validScienceGradeTwo {scienceGradeTwo >= constants::minGrade && scienceGradeTwo <= constants::maxGrade};
  int finalScienceGradeTwo {(validscienceGradeTwo) ? scienceGradeTwo : 0};
  return finalscienceGradeTwo;

}


int main() {

  mathematics::mathsGrade();
  englishLanguage::englishLanguageGrade();
  englishLiterature::englishLiteratureGrade();
  scienceChoose::chooseScience();
  firstScienceCombinedGrade::combinedScienceGradeOne();
  secondScienceCombinedGrade::combinedScienceGradeTwo();
  return 0;
}
