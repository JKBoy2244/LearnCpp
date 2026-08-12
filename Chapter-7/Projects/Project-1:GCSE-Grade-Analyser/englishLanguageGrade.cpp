#include <iostream>
using namespace std;

#include "constants.h"                     //for constants::minGrade and constants::maxGrade
#include "englishLangauageGrade.h"         //for englishLanguage::englishLanguageGrade

namespace englishLanguage {
  int englishLanguageGrade() {

    cout << "Enter your GCSE english language grade?\n";
    int englishLanguageGrade {};
    cin >> englishLanguageGrade;
    bool validEnglishLanguageGrade {englishLanguageGrade >= constants::minGrade && englishLanguageGrade <= constants::maxGrade};
    int finalEnglishLanguageGrade {(validEnglishLanguageGrade) ? englishLanguageGrade : 0};
    return finalEnglishLanguageGrade;

  }
}
