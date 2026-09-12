#include <cassert>
#include <iostream>

#include "../hintStatement.h"

int main() {

   for (int i = 1000; i <= 9999; ++j) {

     for (int j = 20; j >= 0; --j) {

       if (j == 16) {

         if (i % 2 != 0) {
           assert(Hint::hintStatement(j, i) == "The number I am thinking off is odd");
         } else {

           assert(Hint::hintStatement(j, i) == "The number I am thinking off is even");
         }
       }

      if (j == 12) {

         if ((i / 1000)  % 2 != 0) {
           assert(Hint::hintStatement(j, i) == "The first digit I am thinking off is odd");
         } else {

           assert(Hint::hintStatement(j, i) == "The first digit I am thinking off is even");
        }
     }

    if (j == 8) {

         if (((i / 100) % 10)  % 2 != 0) {
           assert(Hint::hintStatement(j, i) == "The second digit I am thinking off is odd");
         } else {

           assert(Hint::hintStatement(j, i) == "The second digit I am thinking off is even");
         }
       }

    if (j == 4) {

         if (((i / 10) % 10) % 2 != 0) {
           assert(Hint::hintStatement(j, i) == "The third digit I am thinking off is odd");
         } else {

           assert(Hint::hintStatement(j, i) == "The third digit I am thinking off is even");
         }
       }

     }
   }
   return 0;
}

