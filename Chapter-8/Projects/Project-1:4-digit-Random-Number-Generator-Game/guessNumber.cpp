#include <iostream>
#include <random>
using namespace std;

#include "guessNumber.h"

namespace Guess {
  int guessNumber(int programNumber) {

   cout << "Your 20 chances start now!\n";
   cout << "Guess the number I am thinking of\n";
   int number {};
   cin >> number;
   return number;
 }
}
