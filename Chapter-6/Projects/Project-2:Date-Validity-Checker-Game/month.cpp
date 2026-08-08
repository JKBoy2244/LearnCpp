#include <iostream>
#include <string>
using namespace std;

#include "month.h"

int month() {

  cout << "Please enter a month number from 1 to 12 as a second part of the date?\n";                                             //Prompts user to enter the month
  int monthDate {};
  cin monthDate;
  return monthDate;
}
