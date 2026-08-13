#include <iostream>
#include <string>
using namespace std;

#include "optionSubjectFour.h"

namespace optionFour {
  string optionSubjectFour(string optionOne, string optionTwo, string optionThree) {

    cout << "Enter valid optional subject four which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject "
           "isn't there, write other (all lower case too)?\n";
    [[maybe_unused]] string optionFour {};
    getline(cin >> ws, optionFour);
    bool validOptionFour {(optionFour == "geography") || (optionFour == "history") || (optionFour == "art") || (optionFour == "french") || (optionFour == "spanish") || (optionFour == "german") 
                       || (optionFour == "italian") || (optionFour == "chinese mandarin") || (optionFour == "religious studies") || (optionFour == "latin") || (optionFour == "computer science")
                       || (optionFour == "statistics") || (optionFour == "design & technology") || (optionFour == "physical education") || (optionFour == "other")};

    if (((validOptionFour) && (optionFour != optionThree) && (optionFour != optionTwo) && (optionFour != optionOne)) || (optionFour == "other")) {
      return optionFour;
    
    } else {

      return " ";
    }
  }
}
