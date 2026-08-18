#include <iostream>
#include <random>
using namespace std;

#include "constants.h"
#include "randomNumber.h"

namespace Generate {
  int randomNumber() {

     random_device rd;     //this line is very important for seeding rd() to make the generation more random rather than some sequence
     mt19937 number {rd()};
     uniform_int_distribution range{constants::minNumber, constants::maxNumber};
     int programNumber = range(number);
     return programNumber;
  }
}
