#include <iostream>
#include <string>
using namespace std;

#include "questionTwo.h"

int questionTwo(int currentScore) {

  cout << "Question Two: What is the capital city of Denmark?\n";
  cout << "a). Copenhagen b). Cairo c). Paris d). Mexico City\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'a') ? "correct" : "incorrect"};               //Prompts user to answer questionTwo
  
  if (correctOrNot == "correct") {
    cout << "Yes, a). Copenhagen is the correct answer!";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Yes, b). London is the correct answer!";
    return currentScore;
  }
}
