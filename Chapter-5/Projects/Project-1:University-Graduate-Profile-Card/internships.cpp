#include <iostream>
#include <string>
using namespace std;

#include "internships.h"

int internships() {

  cout << "How many internships did you complete during your 3 years of undergraduate at university?\n";            //Prompts user to display number of completed internships
  int internshipCount {};
  cin >> internshipCount;
  const int internshipNumber = internshipCount;

  if (internshipNumber < 0) {
    return 0;
  }

  return internshipNumber;
}
