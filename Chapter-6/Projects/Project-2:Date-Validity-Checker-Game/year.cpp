#include <iostream>
using namespace std;

#include "year.h"

int year() {

  cout << "Please enter a year as the third part of the date?\n";                                                              //Prompts user to enter the year
  int yearDate {};
  cin >> yearDate;
  return yearDate;
}
