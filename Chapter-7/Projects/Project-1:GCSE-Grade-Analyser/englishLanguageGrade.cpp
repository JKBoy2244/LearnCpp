#include <iostream>
using namespace std;

#include "constants.h"                     //for constants::minGrade and constants::maxGrade
#include "englishLanguageGrade.h"         //for englishLanguage::englishLanguageGrade

namespace englishLanguage {
  int englishLanguageGrade() {

    cout << "Enter your GCSE english language grade?\n";
    int LanguageGrade {};
    cin >> LanguageGrade;
    bool validLanguageGrade {LanguageGrade >= constants::minGrade && LanguageGrade <= constants::maxGrade};
    int finalLanguageGrade {(validLanguageGrade) ? LanguageGrade : 0};
    return finalLanguageGrade;

  }
}
