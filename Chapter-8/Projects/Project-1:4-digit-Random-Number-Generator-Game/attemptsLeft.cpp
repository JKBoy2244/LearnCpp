#include <iostream>
using namespace std;

#include "constants.h"
#include "attemptsLeft.h"

namespace Attempts{
  int attemptsLeft(int maxChances, int attempts) {

   int attemptsRemaining = maxChances - attempts;
   return attemptsRemaining;
 }
}
