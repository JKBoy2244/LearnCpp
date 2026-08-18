#include <iostream>
using namespace std;

#include "valueProximity.h"

namespace Proximity {
  void valueProximity(int number, int randomNumber) {

    if ( abs(randomNumber - number ) <= 100 ) {

       cout << "Your guess is within 100 from the number I am thinking of\n";
    }

    else if ( ( abs(randomNumber - number ) > 100) && ( abs(randomNumber - number ) <= 500) ) {

       cout << "Your guess is extremely very close to the number I am thinking of\n";
    }

     else if ( ( abs(randomNumber - number ) > 500) && ( abs(randomNumber - number ) <= 1000) ) {

       cout << "Your guess is  close to the number I am thinking of\n";
    }

    else {

      cout << "Your guess is really far off\n";
    }
  }
}
