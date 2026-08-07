#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "classification.h"

string_view classification(double percentage) {

  bool excellent {percentage >= 90.0 and percentage <= 100.0}
  bool veryGood {percentage >= 80.0 and percentage < 90.0}
  bool good {percentage >= 70.0 and percentage < 80.0}
  bool average {percentage >= 60.0 and percentage < 70.0}
  bool mediocre {percentage >= 50.0 and percentage < 60.0}                            //Converts the score into performance rating
  bool poor {percentage >= 40.0 and percentage < 50.0}
  bool veryPoor {percentage < 40.0}

  if (excellent) {

    string_view classifiedRating =  "Excellent";
    return classifiedRating;
  } 

  else if (veryGood) {

    string_view classifiedRating =  "Very Good";
    return classifiedRating;
  }

  else if (good) {

    string_view classifiedRating =  "Good";
    return classifiedRating;
  }

  else if (average) {

    string_view classifiedRating =  "Average";
    return classifiedRating;
  }

  else if (mediocre) {

    string_view classifiedRating =  "Mediocre";
    return classifiedRating;
  }

  else if (poor) {

    string_view classifiedRating =  "Poor";
    return classifiedRating;
  }

  else if (veryPoor) {

    string_view classifiedRating =  "Very Poor";
    return classifiedRating;
  }
}
