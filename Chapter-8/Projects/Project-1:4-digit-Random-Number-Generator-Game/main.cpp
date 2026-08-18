#include <iostream>
#include <random>
#include <string>
using namespace std;

#include "constants.h"
#include "readyMenu.h"

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
*/

int main() {

  static int menuAttempts {0};
  while (menuAttempts < constants::maxMenuChances) {         //The user has 3 chances to enter a valid yes or no to prevent the program from running forever. Entire program should run promptly, not forever!    

    tryAgain:
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

    
  }

  
  return 0;
}
