#include <iostream>
#include <string>
using namespace std;

#include "questionSeven.h"

int questionSeven(int currentScore) {

  cout << "Question Seven: What is the capital city of Uganda?\n";
  cout << "a). Accra b). Kampala c). Maputo d). Harare\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'b') ? "correct" : "incorrect"};               //Prompts user to answer questionSeven
  
  if (correctOrNot == "correct") {
    cout << "Yes, b). Kampala is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Eight!\n";
    return currentScore;
  }
}
