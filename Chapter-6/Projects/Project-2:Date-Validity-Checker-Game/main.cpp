#include <iostream>
#include <string>
using namespace std;

int day() {

  cout << "Please enter a day between 1 and however many days in total for a partiuclar month as a date?\n";                              //Prompts user to enter the day
  int dayDate {};
  cin dayDate;
  return dayDate;
}

string month() {

  cout << "Please enter a month from January to December as a second part of the date?\n";                                             //Prompts user to enter the month
  string monthDate {};
  cin monthDate;
  return monthDate;
}

int year() {

  cout << "Please enter a year as the third part of the date?\n";                                                              //Prompts user to enter the year
  int yearDate {};
  cin yearDate;
  return yearDate;
}
