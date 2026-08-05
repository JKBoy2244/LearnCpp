#include <iostream>
#include <string_view>
using namespace std;

#include "classification.h"

string_view classification(double finalMark) {

   if (finalMark >= 70.0) {

      string_view finalGrade = "First Class";
      return finalGrade;
   }

   else if (finalMark >= 60.0 and finalMark < 70.0) {                              //Classifying final marks into the respective grades

     string_view finalGrade = "Upper Second Class Honours";
     return finalGrade;
   }

   else if (finalMark >= 50.0 and finalMark < 60.0) {

     string_view finalGrade = "Lower Second Class Honours";
     return finalGrade;
   }

  else if (finalMark >= 40 and finalMark < 50.0) {

     string_view finalGrade = "Third Class Honours";
     return finalGrade;
   }

  else {
 
     string_view finalGrade = "Fail";
     return finalGrade;
  }
}
