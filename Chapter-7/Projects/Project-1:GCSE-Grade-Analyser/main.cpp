#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "constants.h"                 //for constants::minGrade and constants::maxGrade
#include "mathsGrade.h"                 //for mathematics::mathsGrade


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
  return finalEnglishLanguage;

}

int englishLiteratureGrade() {

  cout << "Enter your GCSE english literature grade?\n";
  int englishLiteratureGrade {};
  cin >> englishLiteratureGrade;
  bool validEnglishLiteratureGrade {englishLiteratureGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
  int finalEnglishLiteratureGrade {(validEnglishLiteratureGrade) ? englishLiteratureGrade : 0};
  return finalEnglishLiteratureGrade;

}

int main() {

  mathematics::mathsGrade();
  return 0;
}
