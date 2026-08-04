#include <iostream>
#include <string>
using namespace std;

#include "fullProfileCard.h"

void fullProfileCard(string_view firstNameInput, string_view lastNameInput, string_view universityNameInput, string_view courseNameInput, double firstYearScore, double secondYearScore, double thirdYearScore, double firstYearWeightingResult,
double secondYearWeightingResult, double thirdYearWeightingResult, double finalMark, string finalGrade, int internshipNumber) {

   cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
   cout << "UNIVERSITY STUDENT GRADUATE PROFILE CARD!\n";
   cout << "-------------------------------------------";
   cout << "First name : " << firstNameInput << endl;
   cout << "Last name : " << lastNameInput << endl;
   cout << "University name : " << universityNameInput << endl;
   cout << "Course name : " << courseNameInput << endl;
   cout << "First year result : " << firstYearScore << "% -> " << firstYearWeightingResult << "/10\n";
   cout << "Second year result : " << secondYearScore << "% -> " << secondYearWeightingResult << "/30\n";
   cout << "Third year result : " << thirdYearScore << "% -> " << thirdYearWeightingResult << "/60\n";
   cout << "Final Score : " << finalMark << "% -> " << finalGrade << endl;
   cout << "Number of internships completed : " << internshipNumber << endl;
   cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}
