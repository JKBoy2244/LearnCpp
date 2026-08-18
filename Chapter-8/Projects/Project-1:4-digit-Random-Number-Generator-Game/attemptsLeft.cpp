#include <iostream>
using namespace std;

#include "constants.h"
#include "attemptsLeft.h"

int attemptsLeft(constants::maxChances, int attempts) {

   int attemptsRemaining = constants::maxChances - attempts;
   return attemptsRemaining;
}
