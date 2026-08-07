#include <iostream>
#include <string>
using namespace std;

#include "questionOne.h"

int questionOne() {

  int currentScore {0};
  
  cout << "Question One: What is the capital city of England?\n";
  cout << "a). Dublin b). London c). Vienna d). Athens\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'b') ? "correct" : "incorrect"};
  
  if (correctOrNot == "correct") {
    cout << "Yes, b). London is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Yes, b). London is the correct answer!\n";
    return currentScore;
  }
}
