#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "constants.h"                 //for constants::minGrade and constants::maxGrade
#include "mathsGrade.h"                 //for mathematics::mathsGrade
#include "englishLanguageGrade.h"      //for englishLanguage::englishLanguageGrade
#include "englishLiteratureGrade.h"      //for englishLiterature::englishLiteratureGrade
#include "chooseScience.h"                 //for scienceChoose::chooseScience
#include "combinedScienceGradeOne.h"     //for firstScienceCombinedGrade::combinedScienceGradeOne
#include "combinedScienceGradeTwo.h"      //for secondScienceCombinedGrade::combinedScienceGradeTwo
#include "biologyGrade.h"                     //for biology::biologyGrade
#include "chemistryGrade.h"                 //for chemistry::chemistryGrade
#include "physicsGrade.h"                 //for physics::physicsGrade
#include "optionalCount.h"                //for option::optionalCount
#include "combinedScienceTotal.h"          //for combinedTotalSubjects::combinedScienceTotal
#include "trpleScienceTotal.h"           //for tripleTotalSubjects::tripleScienceTotal
#include "optionSubjectOne.h"              //for optionOne::optionSubjectOne
#include "optionSubjectTwo.h"               //for optionTwo::optionSubjectTwo
#include "optionSubjectThree.h"              //for optionThree::optionSubjectThree
#include "optionSubjectFour.h"               //for optionFour::optionSubjectFour
#include "optionSubjectFive.h"               //for optionFive::optionSubjectFive
#include "optionSubjectSix.h"                  //for optionSix::optionSubjectSix

int mathsGrade() {

  cout << "Enter your GCSE mathematics grade?\n"; 
  int mathGrade {};
  cin >> mathGrade;
  bool validMathGrade {mathGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
  int finalMathGrade {(validMathGrade) ? mathGrade : 0};
  return finalMathGrade;

}

int englishLanguageGrade() {

  cout << "Enter your GCSE english language grade?\n";
  int LanguageGrade {};
  cin >> LanguageGrade;
  bool validLanguageGrade {LanguageGrade >= constants::minGrade && LanguageGrade <= constants::maxGrade};
  int finalLanguageGrade {(validLanguageGrade) ? LanguageGrade : 0};
  return finalLanguageGrade;

}

int englishLiteratureGrade() {

  cout << "Enter your GCSE english literature grade?\n";
  int LiteratureGrade {};
  cin >> LiteratureGrade;
  bool validLiteratureGrade {LiteratureGrade >= constants::minGrade && mathGrade <= constants::maxGrade};
  int finalLiteratureGrade {(validLiteratureGrade) ? LiteratureGrade : 0};
  return finalLiteratureGrade;

}

string chooseScience() {

  cout << "Did you take triple science or combined science, type either triple or combined please (nothing else)?\n";
  string scienceOption {};
  cin >> scienceOption;
  if (scienceOption == "triple" || scienceOption == "combined") {
    return scienceOption;
  } else {
    return 0;
  }
}

int combinedScienceGradeOne() {

  cout << "Enter your first GCSE combined science grade?\n";
  [[maybe_unused]] int scienceGradeOne {};
  cin >> scienceGradeOne;
  bool validScienceGradeOne {scienceGradeOne >= constants::minGrade && scienceGradeOne <= constants::maxGrade};
  int finalScienceGradeOne {(validscienceGradeOne) ? scienceGradeOne : 0};
  return finalscienceGradeOne;

}

int combinedScienceGradeTwo() {

  cout << "Enter your second GCSE combined science grade?\n";
  [[maybe_unused]] int scienceGradeTwo {};
  cin >> scienceGradeTwo;
  bool validScienceGradeTwo {scienceGradeTwo >= constants::minGrade && scienceGradeTwo <= constants::maxGrade};
  int finalScienceGradeTwo {(validscienceGradeTwo) ? scienceGradeTwo : 0};
  return finalscienceGradeTwo;

}

int biologyGrade() {

  cout << "Enter your GCSE biology grade?\n"; 
  [[maybe_unused]] int biologyGrade {};
  cin >> biologyGrade;
  bool validBiologyGrade {biologyGrade >= constants::minGrade && biologyGrade <= constants::maxGrade};
  int finalBiologyGrade {(validBiologyGrade) ? biologyGrade : 0};
  return finalBiologyGrade;

}

int chemistryGrade() {

  cout << "Enter your GCSE chemistry grade?\n"; 
  [[maybe_unused]] int chemistryGrade {};
  cin >> chemistryGrade;
  bool validChemistryGrade {chemistryGrade >= constants::minGrade && chemistryGrade <= constants::maxGrade};
  int finalChemistryGrade {(validChemistryGrade) ? chemistryGrade : 0};
  return finalChemistryGrade;

}

int physicsGrade() {

  cout << "Enter your GCSE physics grade?\n"; 
  [[maybe_unused]] int physicsGrade {};
  cin >> physicsGrade;
  bool validPhysicsGrade {physicsGrade >= constants::minGrade && physicsGrade <= constants::maxGrade};
  int finalPhysicsGrade {(validPhysicsGrade) ? physicsGrade : 0};
  return finalPhysicsGrade;

}

int optionalCount() {

  cout << "How many option choices are you taking for GCSEs(maximum 6)?\n"
  const unsigned int optionCount {};
  cin >> optionCount;
  bool validCount {optionCount >= constants::minOptionCount && optionCount <= constants::maxOptionCount};
  int finalCount {(optionCount) ? optionCount : 0};
  return finalCount;
}

int combinedScienceTotal(int finalCount) {

  [[maybe_unused]] int totalSubjectsCombined {5 + finalCount};
  return totalSubjectsCombined;
}

int tripleScienceTotal(int finalCount) {

  [[maybe_unused]] int totalSubjectsTriple {6 + finalCount};
  return totalSubjectsTriple;
}

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

string optionSubjectTwo(string optionOne) {

  cout << "Enter valid optional subject two which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject
           isn't there, write other (all lower case too)?\n";
  [[maybe_unused]] string optionTwo {};
  getline(cin >> ws, optionTwo);
  bool validOptionTwo {(optionTwo == "geography") || (optionTwo == "history") || (optionTwo == "art") || (optionTwo == "french") || (optionTwo == "spanish") || (optionTwo == "german") 
                       || (optionTwo == "italian") || (optionTwo == "chinese mandarin") || (optionTwo == "religious studies") || (optionTwo == "latin") || (optionTwo == "computer science")
                       || (optionTwo == "statistics") || (optionTwo == "design & technology") || (optionTwo == "physical education") || (optionTwo == "other")}

  if (((validOptionTwo) && (optionTwo != optionOne)) || (optionTwo == "other")) {
    return optionTwo;
    
  } else {

    return " ";
  }
}

string optionSubjectThree(string optionOne, string optionTwo) {

  cout << "Enter valid optional subject three which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject
           isn't there, write other (all lower case too)?\n";
  [[maybe_unused]] string optionThree {};
  getline(cin >> ws, optionThree);
  bool validOptionThree {(optionThree == "geography") || (optionThree == "history") || (optionThree == "art") || (optionThree == "french") || (optionThree == "spanish") || (optionThree == "german") 
                       || (optionThree == "italian") || (optionThree == "chinese mandarin") || (optionThree == "religious studies") || (optionThree == "latin") || (optionThree == "computer science")
                       || (optionThree == "statistics") || (optionThree == "design & technology") || (optionThree == "physical education") || (optionThree == "other")}

  if (((validOptionThree) && (optionThree != optionTwo) && (optionThree != optionOne)) || (optionThree == "other")) {
    return optionThree;
    
  } else {

    return " ";
  }
}

string optionSubjectFour(string optionOne, string optionTwo, string optionThree) {

  cout << "Enter valid optional subject four which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject
           isn't there, write other (all lower case too)?\n";
  [[maybe_unused]] string optionFour {};
  getline(cin >> ws, optionFour);
  bool validOptionFour {(optionFour == "geography") || (optionFour == "history") || (optionFour == "art") || (optionFour == "french") || (optionFour == "spanish") || (optionFour == "german") 
                       || (optionFour == "italian") || (optionFour == "chinese mandarin") || (optionFour == "religious studies") || (optionFour == "latin") || (optionFour == "computer science")
                       || (optionFour == "statistics") || (optionFour == "design & technology") || (optionFour == "physical education") || (optionFour == "other")}

  if (((validOptionFour) && (optionFour != optionThree) && (optionFour != optionTwo) && (optionFour != optionOne)) || (optionFour == "other")) {
    return optionFour;
    
  } else {

    return " ";
  }
}

string optionSubjectFive(string optionOne, string optionTwo, string optionThree, string optionFour) {

  cout << "Enter valid optional subject five which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject
           isn't there, write other (all lower case too)?\n";
  [[maybe_unused]] string optionFive {};
  getline(cin >> ws, optionFive);
  bool validOptionFive {(optionFive == "geography") || (optionFive == "history") || (optionFive == "art") || (optionFive == "french") || (optionFive == "spanish") || (optionFive == "german") 
                       || (optionFive == "italian") || (optionFive == "chinese mandarin") || (optionFive == "religious studies") || (optionFive == "latin") || (optionFive == "computer science")
                       || (optionFive == "statistics") || (optionFive == "design & technology") || (optionFive == "physical education") || (optionFive == "other")}

  if (((validOptionFive) && (optionFive != optionFour) && (optionFive != optionThree) && (optionFive != optionTwo) && (optionFive != optionOne)) || (optionFive == "other")) {
    return optionFive;
    
  } else {

    return " ";
  }
}

string optionSubjectSix(string optionOne, string optionTwo, string optionThree, string optionFour, string optionFive) {

  cout << "Enter valid optional subject six which isn't the core subjects maths, english and science and actually exists and when typing, all lower cases please with no single upper case and if your subject
           isn't there, write other (all lower case too)?\n";
  [[maybe_unused]] string optionSix {};
  getline(cin >> ws, optionSix);
  bool validOptionSix {(optionSix == "geography") || (optionSix == "history") || (optionSix == "art") || (optionSix == "french") || (optionSix == "spanish") || (optionSix == "german") 
                       || (optionSix == "italian") || (optionSix == "chinese mandarin") || (optionSix == "religious studies") || (optionSix == "latin") || (optionSix == "computer science")
                       || (optionSix == "statistics") || (optionSix == "design & technology") || (optionSix == "physical education") || (optionSix == "other")}

  if (((validOptionSix) && (optionSix != optionFive) && (optionSix != optionFour) && (optionSix != optionThree) && (optionSix != optionTwo) && (optionSix != optionOne)) || (optionSix == "other")) {
    return optionSix;
    
  } else {

    return " ";
  }
}

int main() {

  mathematics::mathsGrade();
  englishLanguage::englishLanguageGrade();
  englishLiterature::englishLiteratureGrade();
  scienceChoose::chooseScience();
  firstScienceCombinedGrade::combinedScienceGradeOne();
  secondScienceCombinedGrade::combinedScienceGradeTwo();
  biology::biologyGrade();
  chemistry::chemistryGrade();
  physics::physicsGrade();
  option::optionalCount();
  combinedTotalSubjects::combinedScienceTotal(finalCount);
  tripleTotalSubjects::tripleScienceTotal(finalCount);
  optionOne::optionSubjectOne();
  
  
  return 0;
}
