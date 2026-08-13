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
#include "tripleScienceTotal.h"           //for tripleTotalSubjects::tripleScienceTotal
#include "optionSubjectOne.h"              //for optionOne::optionSubjectOne
#include "optionSubjectTwo.h"               //for optionTwo::optionSubjectTwo
#include "optionSubjectThree.h"              //for optionThree::optionSubjectThree
#include "optionSubjectFour.h"               //for optionFour::optionSubjectFour
#include "optionSubjectFive.h"               //for optionFive::optionSubjectFive
#include "optionSubjectSix.h"                  //for optionSix::optionSubjectSix
#include "optionOneGrade.h"                   //for oneOption::optionOneGrade
#include "optionTwoGrade.h"                   //for twoOption::optionTwoGrade
#include "optionThreeGrade.h"                 //for threeOption::optionThreeGrade
#include "optionFourGrade.h"                  //for fourOption::optionFourGrade
#include "optionFiveGrade.h"                 //for fiveOption::optionFiveGrade
#include "optionSixGrade.h"                    //for sixOption::optionSixGrade
#include "averageFiveSubjectsPartOne.h"        //for averageFiveSubjectsOne::averageFiveSubjectsPartOne()
#include "averageSixSubjectsPartOne.h"          //for averageSixSubjectsOne::averageSixSubjectsPartOne()
#include "averageSevenSubjectsPartOne.h"          //for averageSevenSubjectsOne::averageSevenSubjectsPartOne()
#include "averageEightSubjectsPartOne.h"           //for averageEightSubjectsOne::averageEightSubjectsPartOne()
#include "averageNineSubjectsPartOne.h"           //for averageNineSubjectsOne::averageNineSubjectsPartOne()
#include "averageTenSubjectsPartOne.h"             //for averageTenSubjectsOne::averageTenSubjectsPartOne()
#include "averageElevenSubjectsPartOne.h"            //for averageElevenSubjectsOne::averageElevenSubjectsPartOne()
#include "averageSubjectsPartTwo.h"                   //for averageSubjectsTwo::averageSubjectsPartTwo()
#include "gradeTier.h"                                //for tier::gradeTier
#include "resultStatement.h"                           //for result::resultStatement

/*
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

int optionOneGrade(string optionOne) {

  cout << "Enter your GCSE " << optionOne << " grade?\n"; 
  [[maybe_unused]] int optOneGrade {};
  cin >> optOneGrade;
  bool validOptOneGrade {optOneGrade >= constants::minGrade && optOneGrade <= constants::maxGrade};
  int finalOptOneGrade {(validOptOneGrade) ? optOneGrade : 0};
  return finalOptOneGrade;

}

int optionTwoGrade(string optionTwo) {

  cout << "Enter your GCSE " << optionTwo << " grade?\n"; 
  [[maybe_unused]] int optOTwoGrade {};
  cin >> optTwoGrade;
  bool validOptTwoGrade {optTwoGrade >= constants::minGrade && optTwoGrade <= constants::maxGrade};
  int finalOptTwoGrade {(validOptTwoGrade) ? optTwoGrade : 0};
  return finalOptTwoGrade; 

}

int optionThreeGrade(string optionThree) {

  cout << "Enter your GCSE " << optionThree << " grade?\n"; 
  [[maybe_unused]] int optThreeGrade {};
  cin >> optThreeGrade;
  bool validOptThreeGrade {optThreeGrade >= constants::minGrade && optThreeGrade <= constants::maxGrade};
  int finalOptThreeGrade {(validOptThreeGrade) ? optThreeGrade : 0};
  return finalOptThreeGrade;  

}

int optionFourGrade(string optionFour) {

  cout << "Enter your GCSE " << optionFour << " grade?\n"; 
  [[maybe_unused]] int optFourGrade {};
  cin >> optFourGrade;
  bool validOptFourGrade {optFourGrade >= constants::minGrade && optFourGrade <= constants::maxGrade};
  int finalOptFourGrade {(validOptFourGrade) ? optFourGrade : 0};
  return finalOptFourGrade; 

}

int optionFiveGrade(string optionFive) {

  cout << "Enter your GCSE " << optionFive << " grade?\n"; 
  [[maybe_unused]] int optFiveGrade {};
  cin >> optFiveGrade;
  bool validOptFiveGrade {optFiveGrade >= constants::minGrade && optFiveGrade <= constants::maxGrade};
  int finalOptFiveGrade {(validOptFiveGrade) ? optFiveGrade : 0};
  return finalOptFiveGrade; 

}

int optionSixGrade(string optionSix) {

  cout << "Enter your GCSE " << optionSix << " grade?\n"; 
  [[maybe_unused]] int optSixGrade {};
  cin >> optSixGrade;
  bool validOptSixGrade {optSixGrade >= constants::minGrade && optSixGrade <= constants::maxGrade};
  int finalOptSixGrade {(validOptSixGrade) ? optSixGrade : 0};
  return finalOptSixGrade;

}

double averageFiveSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo) {

  int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo};
  double averageFive { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
  return averageFive;
}

double averageSixSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo, int optionOneGrade) {

  int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo + optionOneGrade};
  double averageSix { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
  return averageSix;
}

double averageSevenSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                   , int optionOneGrade, int optionTwoGrade) {

  int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo + optionOneGrade + optionTwoGrade};
  double averageSeven { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
  return averageSeven;
}

double averageEightSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                   , int optionOneGrade, int optionTwoGrade, int optionThreeGrade) {

  int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo + optionOneGrade + optionTwoGrade + optionThreeGrade};
  double averageEight { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
  return averageEight;
}

double averageNineSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                  , int optionOneGrade, int optionTwoGrade, int optionThreeGrade, int optionFourGrade) {

  int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo
                  + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade};
  double averageNine { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
  return averageNine;
}

double averageTenSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                 , int optionOneGrade, int optionTwoGrade, int optionThreeGrade, int optionFourGrade, int optionFiveGrade) {

  int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo
                  + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade + optionFiveGrade};
  double averageTen { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
  return averageTen;
}

double averageElevenSubjectsPartOne(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalScienceGradeOne, int finalScienceGradeTwo
                                    , int optionOneGrade, int optionTwoGrade, int optionThreeGrade, int optionFourGrade, int optionFiveGrade, int optionSixGrade) {

  int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalScienceGradeOne + finalScienceGradeTwo
                   + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade + optionFiveGrade + optionSixGrade};
  double averageEleven { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
  return averageEleven;
}

double averageSubjectsPartTwo(int finalCount, int finalMathGrade, int finalEnglishLanguageGrade, int finalEnglishLiteratureGrade, int finalBiologyGrade, int finalChemistryGrade
                              int finalPhysicsGrade, int optionOneGrade, int optionTwoGrade, int optionThreeGrade, int optionFourGrade, int optionFiveGrade, int optionSixGrade) {

  if (finalCount == 6) {
     int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade};
     double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
     return average;
  }  

  if (finalCount == 7) {
     int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade + optionOneGrade};
     double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
     return average;
  }  

  if (finalCount == 8) {
     int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade};
     double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
     return average;
  }  

  if (finalCount == 9) {
     int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade + optionThreeGrade};
     double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
     return average;
  }  

  if (finalCount == 10) {
     int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade};
     double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
     return average;
  }  

  if (finalCount == 11) {
     int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade + optionFiveGrade};
     double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
     return average;
  }  

  if (finalCount == 12) {
     int totalScore {finalMathGrade + finalEnglishLanguageGrade + finalEnglishLiteratureGrade + finalBiologyGrade + finalChemistryGrade + finalPhysicsGrade
                     + optionOneGrade + optionTwoGrade + optionThreeGrade + optionFourGrade + optionFiveGrade + optionSixGrade};
     double average { static_cast<double>(totalScore) / static_cast<double>(finalCount) };
     return average;
  }
}

string_view gradeTier(double average) {

  if (average == 9.0) {
    string_view gradeComment == "Outstanding";
    return gradeComment;
  }

  if (average >= 8.0 && average < 9.0) {
    string_view gradeComment == "Very Good";
    return gradeComment;
  }

  if (average >= 7.0 && average < 8.0) {
    string_view gradeComment == "Good";
    return gradeComment;
  }

  if (average >= 6.0 && average < 7.0) {
    string_view gradeComment == "Satisfactory";
    return gradeComment;
  }

  if (average >= 5.0 && average < 6.0) {
    string_view gradeComment == "Not so good";
    return gradeComment;
  }

  if (average >= 4.0 && average < 5.0) {
    string_view gradeComment == "Bad";
    return gradeComment;
  }

  if (average < 4.0) {
    string_view gradeComment == "Poor";
    return gradeComment;
  }
}

 void resultStatement(double average, string_view gradeComment, int finalCount) {

   cout << "Your average GCSE grade across your " << finalCount << " GCSEs is: " << average << " which is classified in terms of average: " << gradeComment <<"!\n";
 }

*/

int main() {

  int finalMathGrade = mathematics::mathsGrade();
  int finalEnglishLanguageGrade = englishLanguage::englishLanguageGrade();
  int finalEnglishLiteratureGrade = englishLiterature::englishLiteratureGrade();
  string scienceOption = scienceChoose::chooseScience();

  if (scienceOption == "combined") {

     int finalScienceGradeOne = firstScienceCombinedGrade::combinedScienceGradeOne();
     int finalScienceGradeTwo = secondScienceCombinedGrade::combinedScienceGradeTwo();
  }

  if (scienceOption == "triple") {

     int biology::biologyGrade();
    chemistry::chemistryGrade();
    physics::physicsGrade();
  }
  //firstScienceCombinedGrade::combinedScienceGradeOne();
  //secondScienceCombinedGrade::combinedScienceGradeTwo();
  biology::biologyGrade();
  chemistry::chemistryGrade();
  physics::physicsGrade();
  option::optionalCount();
  combinedTotalSubjects::combinedScienceTotal(finalCount);
  tripleTotalSubjects::tripleScienceTotal(finalCount);
  optionOne::optionSubjectOne();
  optionTwo::optionSubjectTwo(optionOne);
  optionThree::optionSubjectThree(optionOne, optionTwo);
  optionFour::optionSubjectFour(optionOne, optionTwo, optionThree);
  optionFive::optionSubjectFive(optionOne, optionTwo, optionThree, optionFour);
  optionSix::optionSubjectSix(optionOne, optionTwo, optionThree, optionFour, optionFive);
  oneOption::optionOneGrade(optionOne);
  twoOption::optionTwoGrade(optionTwo);
  threeOption::optionThreeGrade(optionThree);
  fourOption::optionFourGrade(optionFour);
  fiveOption::optionFiveGrade(optionFive);
  sixOption::optionSixGrade(optionSix);
  averageFiveSubjectsOne::averageFiveSubjectsPartOne(finalCount, finalMathGrade, finalEnglishLanguageGrade, finalEnglishLiteratureGrade, finalScienceGradeOne, finalScienceGradeTwo);
  averageSixSubjectsOne::averageSixSubjectsPartOne(finalCount, finalMathGrade, finalEnglishLanguageGrade, finalEnglishLiteratureGrade, finalScienceGradeOne, finalScienceGradeTwo,
                                                   optionOneGrade);
  averageSevenSubjectsOne::averageSevenSubjectsPartOne(finalCount, finalMathGrade, finalEnglishLanguageGrade, finalEnglishLiteratureGrade, finalScienceGradeOne, finalScienceGradeTwo,
                                                   optionOneGrade, optionTwoGrade);
  averageEightSubjectsOne::averageEightSubjectsPartOne(finalCount, finalMathGrade, finalEnglishLanguageGrade, finalEnglishLiteratureGrade, finalScienceGradeOne, finalScienceGradeTwo,
                                                   optionOneGrade, optionTwoGrade, optionThreeGrade);
  averageNineSubjectsOne::averageNineSubjectsPartOne(finalCount, finalMathGrade, finalEnglishLanguageGrade, finalEnglishLiteratureGrade, finalScienceGradeOne, finalScienceGradeTwo,
                                                   optionOneGrade, optionTwoGrade, optionThreeGrade, optionFourGrade);
  averageTenSubjectsOne::averageTenSubjectsPartOne(finalCount, finalMathGrade, finalEnglishLanguageGrade, finalEnglishLiteratureGrade, finalScienceGradeOne, finalScienceGradeTwo,
                                                   optionOneGrade, optionTwoGrade, optionThreeGrade, optionFourGrade, optionFiveGrade);
  averageTenSubjectsOne::averageTenSubjectsPartOne(finalCount, finalMathGrade, finalEnglishLanguageGrade, finalEnglishLiteratureGrade, finalScienceGradeOne, finalScienceGradeTwo,
                                                   optionOneGrade, optionTwoGrade, optionThreeGrade, optionFourGrade, optionFiveGrade, optionSixGrade);
  averageSubjectsTwo::averageSubjectsPartTwo(finalCount, finalMathGrade, finalEnglishLanguageGrade, finalEnglishLiteratureGrade, finalBiologyGrade, finalChemistryGrade,
                                              finalPhysicsGrade, optionOneGrade, optionTwoGrade, optionThreeGrade, optionFourGrade, optionFiveGrade, optionSixGrade);
  tier::gradeTier(average);
  result::resultStatement(average, finalCount, gradeComment);
  
  
  return 0;
}
