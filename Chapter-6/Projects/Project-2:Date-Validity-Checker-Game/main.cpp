#include <iostream>
#include <string>
using namespace std;

#include "day.h"
#include "month.h"
#include "year.h"

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

  cout << "Please enter a year from 1950 to 2050 range as the third part of the date?\n";                                                              //Prompts user to enter the year
  int yearDate {};
  cin yearDate;
  return yearDate;
}

string_view dateCheck(int day, string month, int year) {

  if (year < 1950 || year > 2050) {

    string_view outcome = "Invalid";
    return outcome;
  } 

  if ((month != "January") && (month != "February") && (month != "March") && (month != "April") && (month != "May") && (month != "June") && (month != "July")
      && (month != "August") && (month != "September") && (month != "October") && (month != "November") && (month != "December")) {

    string_view outcome = "Invalid";
    return outcome;
  }

 if (day < 1 || day > 31) {

    string_view outcome = "Invalid";
    return outcome;
  }

  if ((month == "April") || (month == "June") || (month == "September") || (month == "November")) {

    if (day < 1 || day > 30) {

      string_view outcome = "Invalid";
      return outcome;
    }
  }

 bool FebruaryValid {(year % 4 == 0 || year % 400 == 0) && (year % 100 != 0)}

  
}
