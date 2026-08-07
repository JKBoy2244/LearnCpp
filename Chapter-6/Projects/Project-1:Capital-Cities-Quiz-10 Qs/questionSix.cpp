#include <iostream>
#include <string>
using namespace std;

#include "questionSix.h"

int questionSix(int currentScore) {

  cout << "Question Six: What is the capital city of South Korea?\n";
  cout << "a). Pyongyang b). Beijing c). Seoul d). Kuala Lumpur\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'c') ? "correct" : "incorrect"};               //Prompts user to answer questionSix
  
  if (correctOrNot == "correct") {
    cout << "Yes, c). Seoul is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Seven!\n";
    return currentScore;
  }
}
