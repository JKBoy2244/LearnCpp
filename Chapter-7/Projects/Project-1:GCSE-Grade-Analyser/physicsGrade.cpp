#include <iostream>
using namespace std;

#include "physicsGrade.h"

namespace physics {
  int physicsGrade() {

    cout << "Enter your GCSE physics grade?\n"; 
    [[maybe_unused]] int physicsGrade {};
    cin >> physicsGrade;
    bool validMathGrade {mathGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
    int finalMathGrade {(validMathGrade) ? mathGrade : 0};
    return finalMathGrade;

  }
}
