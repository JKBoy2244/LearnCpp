#include <iostream>
#include <string>
using namespace std;

#include "optionSubjectSix.h"

namespace optionSix {
  string optionSubjectSix(string optionOne, string optionTwo, string optionThree, string optionFour, string optionFive) {

    cout << "Enter valid optional subject six which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject "
           "isn't there, write other (all lower case too)?\n";
    [[maybe_unused]] string optionSix {};
    getline(cin >> ws, optionSix);
    bool validOptionSix {(optionSix == "geography") || (optionSix == "history") || (optionSix == "art") || (optionSix == "french") || (optionSix == "spanish") || (optionSix == "german") 
                       || (optionSix == "italian") || (optionSix == "chinese mandarin") || (optionSix == "religious studies") || (optionSix == "latin") || (optionSix == "computer science")
                       || (optionSix == "statistics") || (optionSix == "design & technology") || (optionSix == "physical education") || (optionSix == "other")};

    if (((validOptionSix) && (optionSix != optionFive) && (optionSix != optionFour) && (optionSix != optionThree) && (optionSix != optionTwo) && (optionSix != optionOne)) || (optionSix == "other")) {
      return optionSix;
    
    } else {

      return " ";
    }
  }
}  
