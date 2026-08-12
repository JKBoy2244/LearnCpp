#include <iostream>
using namespace std;

#include "constants.h"                 //for constants::minGrade and constants::maxGrade
#include "englishLiteratureGrade.h"

namespace englishLiterature {

  int englishLiteratureGrade() {

    cout << "Enter your GCSE english literature grade?\n";
    int LiteratureGrade {};
    cin >> LiteratureGrade;
    bool validLiteratureGrade {LiteratureGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
    int finalLiteratureGrade {(validLiteratureGrade) ? LiteratureGrade : 0};
    return finalLiteratureGrade;

  }
}
