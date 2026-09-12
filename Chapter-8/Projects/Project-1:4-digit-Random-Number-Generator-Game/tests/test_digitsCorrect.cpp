#include <cassert>
#include <iostream>

#include "../digitsCorrect.h"
#include "randomNumber.h"

int main() {

  for (int randomTest {1}; randomTest < 1000; ++randomTest) {

    int randomNum {Generate::randomNumber()}

    for (int num 1000; num <= 9999; ++num) {

       if ( (num / 1000) == (randomNum / 1000) ) {

         assert(Digits::digitsCorrect(num) == "First digit of your guess is correct!");
        } else {

         assert(Digits::digitsCorrect(num) == "First digit of your guess is incorrect!");
       }

       if ( ( (num / 100) % 10 ) == ( (randomNum / 100) % 10 ) ) {

         assert(Digits::digitsCorrect(num) == "Second digit of your guess is correct!");
       } else {

         assert(Digits::digitsCorrect(num) == "Second digit of your guess is correct!");
       }

      if ( ( (num / 10) % 10 ) == ( (randomNum / 10) % 10 ) ) {

        assert(Digits::digitsCorrect(num) == "Third digit of your guess is correct!");
      } else {

        assert(Digits::digitsCorrect(num) == "Third digit of your guess is correct!");
     }

     if ( ( (num / 1) % 10 ) == ( (randomNum / 1) % 10 ) ) {

        assert(Digits::digitsCorrect(num) == "Fourth digit of your guess is correct!");
     } else {
 
        assert(Digits::digitsCorrect(num) == "Fourth digit of your guess is correct!");
      }    

    }    
  }

  std::cout << "All digits tests passed!";
  return 0;
}
