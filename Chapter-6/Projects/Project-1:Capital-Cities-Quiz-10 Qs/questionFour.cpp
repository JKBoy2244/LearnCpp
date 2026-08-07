#include <iostream>
#include <string>
using namespace std;

#include "questionFour.h"

int questionFour(int currentScore) {

  cout << "Question Four: What is the capital city of Qatar?\n";
  cout << "a). Riyadh b). Manama c). Kuwait City d). Doha\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'd') ? "correct" : "incorrect"};               //Prompts user to answer questionFour
  
  if (correctOrNot == "correct") {
    cout << "Yes, d). Doha is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Five!\n";
    return currentScore;
  }
}
