#include <iostream>
#include <string>
using namespace std;

#include "optionSubjectThree.h"

namespace optionThree {
  string optionSubjectThree(string optionOne, string optionTwo) {

    cout << "Enter valid optional subject three which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject "
           "isn't there, write other (all lower case too)?\n";
    [[maybe_unused]] string optionThree {};
    getline(cin >> ws, optionThree);
    bool validOptionThree {(optionThree == "geography") || (optionThree == "history") || (optionThree == "art") || (optionThree == "french") || (optionThree == "spanish") || (optionThree == "german") 
                       || (optionThree == "italian") || (optionThree == "chinese mandarin") || (optionThree == "religious studies") || (optionThree == "latin") || (optionThree == "computer science")
                       || (optionThree == "statistics") || (optionThree == "design & technology") || (optionThree == "physical education") || (optionThree == "other")};

    if (((validOptionThree) && (optionThree != optionTwo) && (optionThree != optionOne)) || (optionThree == "other")) {
      return optionThree;
    
    } else {

      return " ";
    }
  }
}
