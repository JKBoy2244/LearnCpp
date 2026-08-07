#include <iostream>
#include <string>
using namespace std;

#include "questionNine.h"

int questionNine(int currentScore) {

  cout << "Question Nine: What is the capital city of Canada?\n";
  cout << "a). Washington D.C b). Buenos Aires c). Athens d). Ottawa\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'd') ? "correct" : "incorrect"};               //Prompts user to answer questionNine
  
  if (correctOrNot == "correct") {
    cout << "Yes, d). Ottawa is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Ten!\n";
    return currentScore;
  }
}
