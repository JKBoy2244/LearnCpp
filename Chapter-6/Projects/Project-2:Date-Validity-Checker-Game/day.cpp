#include <iostream>
using namespace std;

#include "day.h"

int day() {

  cout << "Please enter a day between 1 and however many days in total for a partiuclar month as a date?\n";                              //Prompts user to enter the day
  int dayDate {};
  cin >> dayDate;
  return dayDate;
}
