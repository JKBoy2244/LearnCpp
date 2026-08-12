#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "constants.h"                 //for constants::minGrade and constants::maxGrade
#include "mathsGrade.h"                 //for mathematics::mathsGrade
#include "englishLanguageGrade.h"      //for englishLanguage::englishLanguageGrade
#include "englishLiteratureGrade.h"      //for englishLiterature::englishLiteratureGrade
#include "chooseScience.h"                 //for scienceChoose::chooseScience



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
  int englishLanguageGrade {};
  cin >> englishLanguageGrade;
  bool validEnglishLanguageGrade {englishLanguageGrade >= constants::minGrade && englishLanguageGrade <= constants::maxGrade};
  int finalEnglishLanguageGrade {(validEnglishLanguageGrade) ? englishLanguageGrade : 0};
  return finalEnglishLanguageGrade;

}

int englishLiteratureGrade() {

  cout << "Enter your GCSE english literature grade?\n";
  int englishLiteratureGrade {};
  cin >> englishLiteratureGrade;
  bool validEnglishLiteratureGrade {englishLiteratureGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
  int finalEnglishLiteratureGrade {(validEnglishLiteratureGrade) ? englishLiteratureGrade : 0};
  return finalEnglishLiteratureGrade;

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

int main() {

  mathematics::mathsGrade();
  englishLanguage::englishLanguageGrade();
  englishLiterature::englishLiteratureGrade();
  scienceChoose::chooseScience();
  return 0;
}
