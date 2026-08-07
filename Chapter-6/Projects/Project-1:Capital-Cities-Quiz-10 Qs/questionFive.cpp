#include <iostream>
#include <string>
using namespace std;

#include "questionFive.h"

int questionFive(int currentScore) {

  cout << "Question Five: What is the capital city of Bangladesh?\n";
  cout << "a). Islamabad b). Dhaka c). New Delhi d). Astana\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'b') ? "correct" : "incorrect"};               //Prompts user to answer questionFive
  
  if (correctOrNot == "correct") {
    cout << "Yes, b). Dhaka is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Six!\n";
    return currentScore;
  }
}
