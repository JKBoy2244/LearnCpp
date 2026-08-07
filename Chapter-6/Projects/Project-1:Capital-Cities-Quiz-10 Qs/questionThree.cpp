#include <iostream>
#include <string>
using namespace std;

#include "questionThree.h"

int questionThree(int currentScore) {

  cout << "Question Three: What is the capital city of Spain?\n";
  cout << "a). Oslo b). Madrid c). Bucharest d). Moscow\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'b') ? "correct" : "incorrect"};               //Prompts user to answer questionThree
  
  if (correctOrNot == "correct") {
    cout << "Yes, b). Madrid is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Four!\n";
    return currentScore;
  }
}
