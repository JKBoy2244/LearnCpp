#include <iostream>
using namespace std;

void calculate(int valueOne, int valueTwo, char operatorSign) {

    switch (operatorSign) {

#ifdef add
      case '+':       //Case statements (plus breaks) are outside of the learncpp chapter1+chapter2 scope but it had to be used becuase if statements aren't allowed to be used in this project 
        cout << valueOne << " + " << valueTwo << " = " << valueOne + valueTwo;  //Calculates the result based on the chosen operation (addition)
        break;
#endif

#ifdef subtract
      case '-': 
        cout << valueOne << " - " << valueTwo << " = " << valueOne - valueTwo;   //Calculates the result based on the chosen operation (subtraction)
        break;
#endif

 #ifdef divide
      case '/':
        cout << valueOne << " / " << valueTwo << " = " << valueOne / valueTwo;   //Calculates the result based on the chosen operation (division)
        break; 
#endif

#ifdef multiply
      case '*':
        cout << valueOne << " * " << valueTwo << " = " << valueOne * valueTwo;   //Calculates the result based on the chosen operation (multiplication)
        break;
#endif
    }
}
