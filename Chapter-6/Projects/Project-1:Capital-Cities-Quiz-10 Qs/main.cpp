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
#include "percentageScoreCalculate.h"
#include "classification.h"
#include "quizFeedback.h"
#include "scoreDisplay.h"



/* 
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
  getline(cin >> ws, answerOption);                                         //This answer requires more than one word and with just the string type, it only takes the first word even when you type more than one word, hence getline was used
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

double percentageScoreCalculate(int currentScore) {

  double percentage = ((static_cast<double>(currentScore)) / 10) * 100;          //Calculates score to a percentage
  return percentage;
}

string_view classification(double percentage) {

  bool excellent {percentage >= 90.0 and percentage <= 100.0}
  bool veryGood {percentage >= 80.0 and percentage < 90.0}
  bool good {percentage >= 70.0 and percentage < 80.0}
  bool average {percentage >= 60.0 and percentage < 70.0}
  bool mediocre {percentage >= 50.0 and percentage < 60.0}                            //Converts the score into performance rating
  bool poor {percentage >= 40.0 and percentage < 50.0}
  bool veryPoor {percentage < 40.0}

  if (excellent) {

    string_view classifiedRating =  "Excellent";
    return classifiedRating;
  } 

  else if (veryGood) {

    string_view classifiedRating =  "Very Good";
    return classifiedRating;
  }

  else if (good) {

    string_view classifiedRating =  "Good";
    return classifiedRating;
  }

  else if (average) {

    string_view classifiedRating =  "Average";
    return classifiedRating;
  }

  else if (mediocre) {

    string_view classifiedRating =  "Mediocre";
    return classifiedRating;
  }

  else if (poor) {

    string_view classifiedRating =  "Poor";
    return classifiedRating;
  }

  else if (veryPoor) {

    string_view classifiedRating =  "Very Poor";
    return classifiedRating;
  }
}

void scoreDisplay(int currentScore, double percentage, string_view classifiedRating) {

  cout << "---------------------------------------------------------------------------------------\n";
  cout << "Total score for this quiz: " << currentScore << "/10\n";
  cout << "Percentage: " << percentage << "%\n";
  cout << "Performance: " << classifiedRating << endl;
  cout << "---------------------------------------------------------------------------------------\n";
}

*/

int main() {

  cout << "Welcome to the Capital Cities Quiz, this quiz will ask you 10 questions regarding capital cities of the countries!!\n";
  cout << "Each question gives you 4 option and only one option is correct so if you type anything other than the correct option, it's automatically wrong!\n";
  cout << "Are you ready? Please type either y for yes or n for no to continue (y/n)?\n";
  
  char yesNo {};
  cin >> yesNo;                                                                      //The compiler runs this main function in sequential order
  if (yesNo == 'y') {
    
    int score = questionOne();
    score = questionTwo(score), score = questionThree(score), score = questionFour(score), score = questionFive(score), score = questionSix(score),
    score = questionSeven(score), score = questionEight(score), score = questionNine(score),  score = questionTen(score);
    double percent = percentageScoreCalculate(score);
    string_view performance = classification(percent);
    string feedBack = quizFeedback();
    scoreDisplay(score, percent, performance, feedBack);
    
  } else {

     cout << "Since, you're not ready, you can't do this quiz right now unfortunately. Come back when you're ready!\n";
  }
}
