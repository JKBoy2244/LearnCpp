#include <iostream>
#include <string>
namespace std;

#include "optionSubjectOne.h"

namespace optOne {
  string optionSubjectOne() {

    cout << "Enter valid optional subject one which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject
           isn't there, write other (all lower case too)?\n";
    [[maybe_unused]] string optionOne {};
    getline(cin >> ws, optionOne);
    bool validOptionOne {(optionOne == "geography") || (optionOne == "history") || (optionOne == "art") || (optionOne == "french") || (optionOne == "spanish") || (optionOne == "german") 
                       || (optionOne == "italian") || (optionOne == "chinese mandarin") || (optionOne == "religious studies") || (optionOne == "latin") || (optionOne == "computer science")
                       || (optionOne == "statistics") || (optionOne == "design & technology") || (optionOne == "physical education") || (optionOne == "other")}

    if (validOptionOne) {
      return optionOne;
    
    } else {

      return " ";
    }
  }
}
