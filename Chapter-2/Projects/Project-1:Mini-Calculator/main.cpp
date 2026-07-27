#include <iostream>

int firstInteger() {

  std::cout << "Enter a first integer"; //Prompts the user to enter first integer
  int integerOne {};
  std:: cin >> integerOne;
  return integerOne;
}

int secondInteger() {

  std::cout << "Enter a second integer"; //Prompts the user to enter second integer
  int integerTwo {};
  std:: cin >> integerTwo;
  return integerTwo;
}

char operatorSelect() {

  std::cout << "Choose an operator sign from either: +, -, /, * "; //Prompts the user to enter an operator character
  char sign{};
  std::cin >> sign;
  return sign;
}

void calculate(int valueOne, int valueTwo, char operatorSign) {

  if (operatorSign == '+') {
    std::cout << valueOne << " + " << valueTwo << " = " << valueOne + valueTwo;  //Calculates the result based on the chosen operation
  }

  if (operatorSign == '-') {
    std::cout << valueOne << " - " << valueTwo << " = " << valueOne - valueTwo;
  }

  if (operatorSign == '/') {
    std::cout << valueOne << " / " << valueTwo << " = " << valueOne / valueTwo;
  }

  if (operatorSign == '*') {
    std::cout << valueOne << " * " << valueTwo << " = " << valueOne * valueTwo;
  }
  
}

int main() {

  int valueOne = firstInteger(); 
  char operatorSign = operatorSelect();       //The compiler runs this method in sequential order
  int valueTwo = secondInteger();
  calculate(valueOne, valueTwo, operatorSign);
  
}
