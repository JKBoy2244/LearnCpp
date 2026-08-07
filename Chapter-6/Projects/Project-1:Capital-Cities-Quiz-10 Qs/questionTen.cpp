#include <iostream>
#include <string>
using namespace std;

#include "questionTen.h"

int questionTen(int currentScore) {

  cout << "Question Ten: What is the capital city of Dominican Republic?\n";
  cout << "a). Santo Domingo b). Saint George's c). San Marino d). Saint John's\n";
  char answerOption {};
  getline(cin >> ws, answerOption);                                          //This answer requires more than one word and with just the string type, it only takes the first word even when you type more than one word, hence getline was used
  string correctOrNot {(answerOption == 'a') ? "correct" : "incorrect"};               //Prompts user to answer questionTen
  
  if (correctOrNot == "correct") {
    cout << "Yes, a). Santo Domingo is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, and that's quiz over now!\n";
    return currentScore;
  }
}
