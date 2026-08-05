#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "fullProfileCard.h"

void fullProfileCard(string first, string last, string university, string course, double firstYearScore, double secondYearScore, double thirdYearScore, double firstYearWeightingResult,
double secondYearWeightingResult, double thirdYearWeightingResult, double finalMark, string_view finalGrade, int internshipNumber) {

   cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
   cout << "UNIVERSITY STUDENT GRADUATE PROFILE CARD!\n";
   cout << "-------------------------------------------\n";
   cout << "First name : " << first << endl;
   cout << "Last name : " << last << endl;
   cout << "University name : " << university << endl;
   cout << "Course name : " << course << endl;
   cout << "First year result : " << firstYearScore << "% -> " << firstYearWeightingResult << "/10\n";
   cout << "Second year result : " << secondYearScore << "% -> " << secondYearWeightingResult << "/30\n";
   cout << "Third year result : " << thirdYearScore << "% -> " << thirdYearWeightingResult << "/60\n";
   cout << "Final Score : " << finalMark << "% -> " << finalGrade << endl;
   cout << "Number of internships completed : " << internshipNumber << endl;
   cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}
