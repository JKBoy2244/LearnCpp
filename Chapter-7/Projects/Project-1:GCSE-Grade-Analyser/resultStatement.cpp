#include <iostream>
#include <string_view>
using namespace std;

#include "resultStatement.h"

inline namespace result {
  void resultStatement(double average, string_view gradeComment, int finalCount) {

    cout << "Your average GCSE grade across your " << finalCount << " GCSEs is: " << average << " which is classified in terms of average as: " << gradeComment <<"!\n";
  }
}
