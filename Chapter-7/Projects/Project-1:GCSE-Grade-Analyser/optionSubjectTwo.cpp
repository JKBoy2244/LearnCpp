#include <iostream>
#include <string>
using namespace std;

#include "optionSubjectTwo.h" 

namespace optionTwo {
  string optionSubjectTwo(string optionOne) {

    cout << "Enter valid optional subject two which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject "
           "isn't there, write other (all lower case too)?\n";
    [[maybe_unused]] string optionTwo {};
    getline(cin >> ws, optionTwo);
    bool validOptionTwo {(optionTwo == "geography") || (optionTwo == "history") || (optionTwo == "art") || (optionTwo == "french") || (optionTwo == "spanish") || (optionTwo == "german") 
                       || (optionTwo == "italian") || (optionTwo == "chinese mandarin") || (optionTwo == "religious studies") || (optionTwo == "latin") || (optionTwo == "computer science")
                       || (optionTwo == "statistics") || (optionTwo == "design & technology") || (optionTwo == "physical education") || (optionTwo == "other")};

    if (((validOptionTwo) && (optionTwo != optionOne)) || (optionTwo == "other")) {
      return optionTwo;
    
    } else {

      return " ";
    }
  }
}
