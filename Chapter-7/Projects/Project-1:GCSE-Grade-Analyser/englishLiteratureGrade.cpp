#include <iostream>
using namespace std;

#include "constants.h"                 //for constants::minGrade and constants::maxGrade
#include "englishLiteratureGrade.h"

namespace englishLiterature {

  int englishLiteratureGrade() {

    cout << "Enter your GCSE english literature grade?\n";
    int englishLiteratureGrade {};
    cin >> englishLiteratureGrade;
    bool validEnglishLiteratureGrade {englishLiteratureGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
    int finalEnglishLiteratureGrade {(validEnglishLiteratureGrade) ? englishLiteratureGrade : 0};
    return finalEnglishLiteratureGrade;

  }
}
