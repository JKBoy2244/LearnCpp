#include <iostream>
using namespace std;

#include "coulumb.h"

int coulumb(char charge) {

  cout << "Since you choose charge, choose the option below to continue as 1 (option 1). below is the only option\n";
  cout << "---------------------------------------------------------------------------------------------------------";
  cout << "1). Q = It\n";
  cout << "---------------------------------------------------------------------------------------------------------";

  int chargeOption {};
  cin >> chargeOption;

  if (chargeOption == 1) {

    int chargeOption_one = chargeOption;
    return chargeOption_one;
  }  
}
