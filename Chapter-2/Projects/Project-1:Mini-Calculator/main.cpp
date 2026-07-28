#include <iostream>
using namespace std;

#define add
//#define subtract
//#define multiply
//#define divide

int firstInteger() {

  cout << "Enter a first integer"; //Prompts the user to enter first integer
  int integerOne {};
  cin >> integerOne;
  return integerOne;
}

int secondInteger() {

  cout << "Enter a second integer"; //Prompts the user to enter second integer
  int integerTwo {};
  cin >> integerTwo;
  return integerTwo;
}

char operatorSelect() {

  cout << "Choose an operator sign from either: +, -, /, * "; //Prompts the user to enter an operator character
  char sign{};
  cin >> sign;
  return sign;
}

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

int main() {

  int valueOne = firstInteger(); 
  char operatorSign = operatorSelect();       //The compiler runs this method in sequential order
  int valueTwo = secondInteger();
  calculate(valueOne, valueTwo, operatorSign);
  
}
