#include <iostream>
#include <random>
#include <string>
using namespace std;

#include "constants.h"
#include "readyMenu.h"
#include "randomNumber.h"
#include "attemptsLeft.h"
#include "digitsCorrect.h"

int attempts;

/*
char readyMenu() {

  cout << "Welcome to the 4 digit random number generator game. This game you will have 20 chances to guess the number I am thinking off and along the way we give hints but at maximum 5 along the way\n";
  cout << "You start with 1000 points but every time you get a guess wrong which is extremely likely at least, you lose 40 points each time\n";
  cout << "But, don't worry because this is meant to be a deliberately challenging game which is the point\n";
  cout << "Are you ready to play though (please type 'y' or 'n' and lowercase specific)\n";
  char ready {};
  cin >> ready;
  return ready;
    
}

int randomNumber() {

   mt19937 number {rd()};
   uniform_int_distribution range{constants::minNumber, constants::maxNumber};
   int programNumber = range(number);
   return programNumber;
}

int guessNumber(int programNumber) {

   cout << "Your 20 chances start now!\n";
   cout << "Guess the number I am thinking of\n";
   int number {};
   cin >> number;
   return number;
}

int attemptsLeft(constants::maxChances, int attempts) {

   int attemptsRemaining = constants::maxChances - attempts;
   return attemptsRemaining;
}

void digitsCorrect(int number, int randomNumber) {

  cout << "=============================================\n";
  if ( (number / 1000) == (randomNumber / 1000) ) {

     cout << "First digit of your guess is correct!\n";
  } else {

     cout << "First digit of your guess is incorrect!\n";
  }

  if ( ( (number / 100) % 10 ) == ( (randomNumber / 100) % 10 ) ) {

     cout << "Second digit of your guess is correct!\n";
  } else {

     cout << "Second digit of your guess is incorrect!\n";
  }

  if ( ( (number / 10) % 10 ) == ( (randomNumber / 10) % 10 ) ) {

     cout << "Third digit of your guess is correct!\n";
  } else {

     cout << "Third digit of your guess is incorrect!\n";
  }

  if ( ( (number / 1) % 10 ) == ( (randomNumber / 1) % 10 ) ) {

     cout << "Fourth digit of your guess is correct!\n";
  } else {

     cout << "Fourth digit of your guess is incorrect!\n";
  }

}



*/

int main() {

  static int menuAttempts {0};
  while (menuAttempts < constants::maxMenuChances) {         //The user has 3 chances to enter a valid yes or no to prevent the program from running forever. Entire program should run promptly, not forever!    

    tryAgain:                                                         //Statement point if any invalid input and not all 3 attempts used up
    string ready = Menu::readyMenu();
    bool validReady {ready == "yes" || ready == "no"};                                 //Lines 30 and 31 deal with invalid inputs
    bool notEmpty {cin};
    menuAttempts++;                                                                    //If the user enters the valid input within first try, it counts as one attempt!
    bool attemptsFinished {menuAttempts == constants::maxMenuChances};
    
    if ( ((!validReady) || (!notEmpty)) && (!attemptsFinished) ) {

      cout << "Sorry, that's invalid input so please try again, you have " << constants::maxMenuChances - menuAttempts << " left!\n";     //Continues until user uses all attempts if invalid input
      goto tryAgain;
    }

    else if ( ((!validReady) || (!notEmpty)) && (attemptsFinished) ) {

      cout << "Sorry, you used all your attempts to enter a valid input, come back later when you're ready to type something valid!\n";
      exit(0);
    }

    else if (ready == "no") {

      cout << "Sorry you had to go, come back later when you're ready!\n";              //Program stops if user types no
      exit(0);
    }

    else {

      break;              //typing yes forces the program out of the while loop
    }
  }

  while (true) {

     int programNumber = Generate::randomNumber();
     int attempts {0};

     do {
       Retry:
       int number = Guess::GuessNumber(randomNumber);
       attempts++;
       bool correct {number == randomNumber};
       bool attemptsComplete {attempts == constants::maxChances};
       
       if ( (!correct) && (!attemptsComplete) ) {

         int attemptsRemaining = Attempts::attemptsLeft(constants::maxChances, attempts);
         Digits::digitsCorrect(number, randomNumber);
         cout << "Sorry, your number isn't what I am thinking off!\n";
         cout << "You have " << attemptsRemaining << " attempts left!\n";
         goto Retry;
       }

       

     }
     while (attempts < constants::maxChances);
     
  }

  
  return 0;
}
