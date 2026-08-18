#include <iostream>
using namespace std;

#include "constants.h"
#include "attemptsLeft.h"

namespace Attempts {
  int attemptsLeft(constants::maxChances, int attempts) {

   int attemptsRemaining = constants::maxChances - attempts;
   return attemptsRemaining;
 }
}
