#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "scoreDisplay.h"

void scoreDisplay(int currentScore, double percentage, string_view classifiedRating, string feedBack) {

  cout << "---------------------------------------------------------------------------------------\n";              //Displays the score statistics card
  cout << "Total score for this quiz: " << currentScore << "/10\n";
  cout << "Percentage: " << percentage << "%\n";
  cout << "Performance: " << classifiedRating << endl;
  cout << "Feedback: " << feedBack << endl;
  cout << "---------------------------------------------------------------------------------------\n";
}
