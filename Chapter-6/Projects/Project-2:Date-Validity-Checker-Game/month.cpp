#include <iostream>
#include <string>
using namespace std;

#include "month.h"

string month() {

  cout << "Please enter a month from January to December as a second part of the date?\n";                                             //Prompts user to enter the month
  string monthDate {};
  cin monthDate;
  return monthDate;
}
