#include <cassert>
#include <iostream>
#include <sstream>
#include <string>

#include "../digitsCorrect.h"
#include "../randomNumber.h"

int main() {

  for (int randomTest {1}; randomTest < 5000; ++randomTest) {

    int randomNum {Generate::randomNumber()};

    for (int num {1000}; num <= 9999; ++num) {
      std::ostringstream capturedOutput {};
      std::streambuf* originalBuffer {std::cout.rdbuf(capturedOutput.rdbuf())};
      Digits::digitsCorrect(num, randomNum);
      std::cout.rdbuf(originalBuffer);
      std::string output {capturedOutput.str()};

       if ( (num / 1000) == (randomNum / 1000) ) {

         assert(output.find("First digit of your guess is correct!") != std::string::npos);
        } else {

         assert(output.find("First digit of your guess is incorrect!") != std::string::npos);
       }

       if ( ( (num / 100) % 10 ) == ( (randomNum / 100) % 10 ) ) {

         assert(output.find("Second digit of your guess is correct!") != std::string::npos);
       } else {

         assert(output.find("Second digit of your guess is incorrect!") != std::string::npos);
       }

      if ( ( (num / 10) % 10 ) == ( (randomNum / 10) % 10 ) ) {

        assert(output.find("Third digit of your guess is correct!") != std::string::npos);
      } else {

        assert(output.find("Third digit of your guess is incorrect!") != std::string::npos);
     }

     if ( ( (num / 1) % 10 ) == ( (randomNum / 1) % 10 ) ) {

        assert(output.find("Fourth digit of your guess is correct!") != std::string::npos);
     } else {
 
        assert(output.find("Fourth digit of your guess is incorrect!") != std::string::npos);
      }    

    }    
  }

  std::cout << "All digits tests passed!";
  return 0;
}
