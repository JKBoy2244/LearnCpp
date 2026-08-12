#include <iostream>
using namespace std;

#include "constant.h"
#include "mathsGrade.h"  //for mathematics::mathsGrade

namespace mathematics {

  int mathsGrade() {

    cout << "Enter your GCSE mathematics grade?\n";
    int mathGrade {};
    cin >> mathGrade;
    bool validMathGrade {mathGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
    int finalMathGrade {(validMathGrade) ? mathGrade : 0};
    return finalMathGrade;
  }
}
