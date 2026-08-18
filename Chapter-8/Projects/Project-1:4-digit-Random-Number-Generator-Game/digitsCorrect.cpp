#include <iostream>
using namespace std;

#include digitsCorrect.h"

namespace Digits {

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

   cout << "=============================================\n";
  }
}
