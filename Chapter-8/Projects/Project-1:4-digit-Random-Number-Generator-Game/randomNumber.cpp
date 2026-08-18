#include <iostream>
#include <random>
using namespace std;

#include "constants.h"
#include "randomNumber.h"

namespace Generate {
  int randomNumber() {

     mt19937 number {rd()};
     uniform_int_distribution range{constants::minNumber, constants::maxNumber};
     int programNumber = range(number);
     return programNumber;
  }
}
