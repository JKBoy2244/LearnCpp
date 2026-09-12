#include <cassert>
#include <iostream>
#include <sstream>
#include <string>

#include "../randomNumber.h"
#include "../valueProximity.h"

int main() {

  for (int i {0}; i < 5000; ++i) {

    int randomNum {Generate::randomNumber()};

    for (int j {1000}; j <= 9999; ++j) {

      std::ostringstream capturedOutput {};
      std::streambuf* originalBuffer {std::cout.rdbuf(capturedOutput.rdbuf())};
      Proximity::valueProximity(j, randomNum);
      std::cout.rdbuf(originalBuffer);
      std::string output {capturedOutput.str()};

      if ( abs(j -randomNum ) <= 100 ) {

       assert(output.find("Your guess is within 100 from the number I am thinking of") != std::string::npos);
      }  

     else if ( ( abs(j -randomNum ) > 100) && ( abs(j -randomNum ) <= 500) ) {

       assert(output.find("Your guess is extremely very close to the number I am thinking of") != std::string::npos);
     }

     else if ( ( abs(j -randomNum ) > 500) && ( abs(j -randomNum ) <= 1000) ) {

       assert(output.find("Your guess is  close to the number I am thinking of") != std::string::npos);
     }

    else {

      assert(output.find("Your guess is really far off") != std::string::npos);
    }
    }
  }
}
