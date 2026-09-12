#include <cassert>
#include <iostream>
#include <sstream>
#include <string>

#include "../hintStatement.h"

int main() {

   for (int i = 1000; i <= 9999; ++i) {

     for (int j = 20; j >= 0; --j) {

       std::ostringstream capturedOutput {};
       std::streambuf* originalBuffer {std::cout.rdbuf(capturedOutput.rdbuf())};
       Hint::hintStatement(j, i);
       std::cout.rdbuf(originalBuffer);
       std::string output {capturedOutput.str()};

       if (j == 16) {

         if (i % 2 != 0) {
           assert(output.find("The number I am thinking off is odd") != std::string::npos);
         } else {

           assert(output.find("The number I am thinking off is even") != std::string::npos);
         }
       }

      if (j == 12) {

         if ((i / 1000)  % 2 != 0) {
           assert(output.find("The first digit I am thinking off is odd") != std::string::npos);
         } else {

           assert(output.find("The first digit I am thinking off is even") != std::string::npos);
        }
     }

    if (j == 8) {

         if (((i / 100) % 10)  % 2 != 0) {
           assert(output.find("The second digit I am thinking off is odd") != std::string::npos);
         } else {

           assert(output.find("The second digit I am thinking off is even") != std::string::npos);
         }
       }

    if (j == 4) {

         if (((i / 10) % 10) % 2 != 0) {
           assert(output.find("The third digit I am thinking off is odd") != std::string::npos);
         } else {

           assert(output.find("The third digit I am thinking off is even") != std::string::npos);
         }
       }

     }
   }
   return 0;
}

