#include <iostream>
#include <string>
using namespace std;

#include "optionSubjectFive.h"

namespace optionFive {
  string optionSubjectFive(string optionOne, string optionTwo, string optionThree, string optionFour) {

    cout << "Enter valid optional subject five which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject "
           "isn't there, write other (all lower case too)?\n";
    [[maybe_unused]] static string optionFive {};
    getline(cin >> ws, optionFive);
    bool validOptionFive {(optionFive == "geography") || (optionFive == "history") || (optionFive == "art") || (optionFive == "french") || (optionFive == "spanish") || (optionFive == "german") 
                       || (optionFive == "italian") || (optionFive == "chinese mandarin") || (optionFive == "religious studies") || (optionFive == "latin") || (optionFive == "computer science")
                       || (optionFive == "statistics") || (optionFive == "design & technology") || (optionFive == "physical education") || (optionFive == "other")};

    if (((validOptionFive) && (optionFive != optionFour) && (optionFive != optionThree) && (optionFive != optionTwo) && (optionFive != optionOne)) || (optionFive == "other")) {
      return optionFive;
    
    } else {

      return " ";
    }
  }
}
