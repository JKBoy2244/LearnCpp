#include <iostream>
using namespace std;

#include "constants.h"                 //for constants::minGrade and constants::maxGrade
#include "englishLiteratureGrade.h"

namespace englishLiterature {

  int englishLiteratureGrade() {

    cout << "Enter your GCSE english literature grade?\n";
    static int LiteratureGrade {};
    cin >> LiteratureGrade;
    bool validLiteratureGrade {LiteratureGrade >= constants::minGrade && LiteratureGrade <= constants::maxGrade};
    int finalLiteratureGrade {(validLiteratureGrade) ? LiteratureGrade : 0};
    return finalLiteratureGrade;

  }
}
