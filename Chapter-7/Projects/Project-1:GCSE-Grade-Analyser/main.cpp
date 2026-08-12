#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "constants.h"                 //for constants::minGrade and constants::maxGrade
#include "mathGrade.h"                 //for mathematics::mathsGrade

/*

int mathsGrade() {

  cout << "Enter your GCSE mathematics grade?\n";
  int mathGrade {};
  cin mathGrade;
  bool validMathGrade {mathGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
  int finalMathGrade {(validMathGrade) ? mathGrade : 0};
  return finalMathGrade;

}

*/

int main() {

  mathematics::mathsGrade();
  return 0;
}
