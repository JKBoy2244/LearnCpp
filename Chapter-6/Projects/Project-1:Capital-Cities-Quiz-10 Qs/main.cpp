#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "questionOne.h"
#include "questionTwo.h"
#include "questionThree.h"
#include "questionFour.h"
#include "questionFive.h"
#include "questionSix.h"
#include "questionSeven.h"
#include "questionEight.h"
#include "questionNine.h"
#include "questionTen.h"

int questionOne() {

  int currentScore {0};
  
  cout << "Question One: What is the capital city of England?\n";
  cout << "a). Dublin b). London c). Vienna d). Athens\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'b') ? "correct" : "incorrect"};               //Prompts user to answer question One
  
  if (correctOrNot == "correct") {
    cout << "Yes, b). London is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Yes, b). London is the correct answer!\n";
    return currentScore;
  }
}

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

int questionThree(int currentScore) {

  cout << "Question Three: What is the capital city of Spain?\n";
  cout << "a). Oslo b). Madrid c). Bucharest d). Moscow\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'b') ? "correct" : "incorrect"};               //Prompts user to answer questionTwo
  
  if (correctOrNot == "correct") {
    cout << "Yes, b). Madrid is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Four!\n";
    return currentScore;
  }
}

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
    cout << "Sorry, your answer is incorrect, moving on to question Four!\n";
    return currentScore;
  }
}

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
    cout << "Sorry, your answer is incorrect, moving on to question Four!\n";
    return currentScore;
  }
}

int questionSix(int currentScore) {

  cout << "Question Five: What is the capital city of South Korea?\n";
  cout << "a). Pyongyang b). Beijing c). Seoul d). Kuala Lumpur\n";
  char answerOption {};
  cin >> answerOption;
  string correctOrNot {(answerOption == 'c') ? "correct" : "incorrect"};               //Prompts user to answer questionFive
  
  if (correctOrNot == "correct") {
    cout << "Yes, c). Seoul is the correct answer!\n";
    currentScore++;
    return currentScore;
    
  } else {
    cout << "Sorry, your answer is incorrect, moving on to question Seven!\n";
    return currentScore;
  }
}

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
    cout << "Sorry, your answer is incorrect, moving on to question Seven!\n";
    return currentScore;
  }
}

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

int questionTen(int currentScore) {

  cout << "Question Ten: What is the capital city of Dominican Republic?\n";
  cout << "a). Santo Domingo b). Saint George's c). San Marino d). Saint John's\n";
  char answerOption {};
  getline(cin >> ws, answerOption);
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

int main() {

  cout << "Welcome to the Capital Cities Quiz, this quiz will ask you 10 questions regarding capital cities of the countries!!\n";
  cout << "Each question gives you 4 option and only one option is correct so if you type anything other than the correct option, it's automatically wrong!\n";
  cout << "Are you ready? Please type either y for yes or n for no to continue (y/n)?\n";
  
  char yesNo {}
  cin >> yesNo;
  if (yesNo == 'y') {
    questionOne();
    questionTwo();
    questionThree();
    questionFour();
    questionFive();
    questionSix();
    questionSeven();
    questionEight();
    questionNine();
    questionTen();
  } else {

     cout << "Since, you're not ready, you can't do this quiz right now unfortunately. Come back when you're ready!"\n";
  }
}
