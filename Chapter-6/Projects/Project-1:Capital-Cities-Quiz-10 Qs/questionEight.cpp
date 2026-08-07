#include <iostream>
#include <string>
using namespace std;

#include "questionEight.h"

int questionEight(int currentScore) {

  cout << "Question Eight: What is the capital city of Australia?\n";
  cout << "a). Vienna b). Warsaw c). Canberra d). Bratislava\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'c') ? "correct" : "incorrect"};               //Prompts user to answer questionEight
  
  if (correctOrNot == "correct") {
    cout << "Yes, c). Canberra is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Nine!\n";
    return currentScore;
  }
}
