#include <iostream>
#include <string>
using namespace std;

#include "classification.h";

string classification(double finalMark) {

   if (finalMark >= 70.0) {

      string finalGrade = "First Class";
      return finalGrade;
   }

   else if (finalMark >= 60.0 and finalMark < 70.0) {                              //Classifying final marks into the respective grades

     string finalGrade = "Upper Second Class Honours";
     return finalGrade;
   }

   else if (finalMark >= 50.0 and finalMark < 50.0) {

     string finalGrade = "Lower Second Class Honours";
     return finalGrade;
   }

  else if (finalMark >= 40 and finalMark < 50.0) {

     string finalGrade = "Third Class Honours";
     return finalGrade;
   }

  else {
 
     string finalGrade = "Fail";
     return finalGrade;
  }
}
