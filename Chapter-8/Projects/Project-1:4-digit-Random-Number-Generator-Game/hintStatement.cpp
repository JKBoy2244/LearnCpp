#include <iostream>
using namespace std;

#include "hintStatement.h"


namespace Hint {
 void hintStatement(int attemptsRemaining, int randomNumber) {

  switch (attemptsRemaining) {

     case 16:
        if (randomNumber % 2 != 0) {
           print("The number I am thinking off is odd");
           break;
        } else {

          print("The number I am thinking off is even");
          break;
        }

    case 12: 
        if ((randomNumber / 1000)  % 2 != 0) {                     (randomNumber / 1000)     
           print("The first digit I am thinking off is odd");
           break;
        } else {

          print("The first digit I am thinking off is even");
          break;
        }

   case 8:
        if (((randomNumber / 100) % 10)  % 2 != 0) {
           print("The second digit I am thinking off is odd");
           break;
        } else {

          print("The second digit I am thinking off is even");
          break;
        }

  case 4:
        if (((randomNumber / 10) % 10) % 2 != 0) {
           print("The third digit I am thinking off is odd");
           break;
        } else {

          print("The third digit I am thinking off is even");
          break;
        }

      
    }
  }
}
