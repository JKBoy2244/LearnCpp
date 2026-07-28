#include <iostream>
using namespace std;

int firstInteger();
int secondInteger();
char operatorSelect();
void calculate(valueOne, valueTwo, operatorSign);

int main() {

  int valueOne = firstInteger(); 
  char operatorSign = operatorSelect();       //The compiler runs this method in sequential order
  int valueTwo = secondInteger();
  calculate(valueOne, valueTwo, operatorSign);
  
}
