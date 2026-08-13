#include <iostream>
#include <string_view>
using namespace std;

#include "gradeTier.h"

namespace tier {
  string_view gradeTier(double average) {

    if (average >= 9.0) {
      string_view gradeComment = "Outstanding";
      return gradeComment;
    }

    if (average >= 8.0 && average < 9.0) {
      string_view gradeComment = "Very Good";
      return gradeComment;
    }

    if (average >= 7.0 && average < 8.0) {
      string_view gradeComment = "Good";
      return gradeComment;
    }

    if (average >= 6.0 && average < 7.0) {
      string_view gradeComment = "Satisfactory";
      return gradeComment;
    }

    if (average >= 5.0 && average < 6.0) {
      string_view gradeComment = "Not so good";
      return gradeComment;
    }

    if (average >= 4.0 && average < 5.0) {
      string_view gradeComment = "Bad";
      return gradeComment;
    }

    if (average < 4.0) {
      string_view gradeComment = "Poor";
      return gradeComment;
    }
  }
}
