#include <iostream>
#include <string>
using namespace std;

#include "day.h"
#include "month.h"
#include "year.h"
#include "dateCheck.h"
#include "output.h"

/*
 int day() {

  cout << "Please enter a day between 1 and however many days in total for a partiuclar month as a date?\n";                              //Prompts user to enter the day
  int dayDate {};
  cin dayDate;
  return dayDate;
}

int month() {

  cout << "Please enter a month number from 1 to 12 as a second part of the date?\n";                                             //Prompts user to enter the month
  int monthDate {};
  cin monthDate;
  return monthDate;
}

int year() {

  cout << "Please enter a year from 1950 to 2050 range as the third part of the date?\n";                                                              //Prompts user to enter the year
  int yearDate {};
  cin yearDate;
  return yearDate;
}

string_view dateCheck(int dayDate, int monthDate, int yearDate) {

  bool thirtyDayRange {((month == 4) || (month == 6) || (month == 9) || (month == 12)) && (year >= 1950 && year <= 2050) && (day >= 1 && day <= 30)}                                                             //Conditions list for dates
  bool thirtyOneDayRange {((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 11)) && (year >= 1950 && year <= 2050) && (day >= 1 && day <= 31)}
  bool februaryRange {((if year % 4 == 0 || year % 400 == 0) && (year % 100 != 0)) ? ((month == 2) && (year >= 1950 && year <= 2050) && (day >= 1 && day <= 29)) : ((month == 2) && (year >= 1950 && year <= 2050) && (day >= 1 && day <= 28))}

  if ((thirtyDayRange) || (thirtyOneDayRange) || (februaryRange)) {

    string_view outcome = "valid";                                                    //Date Checker part
    return outcome; 
  } else {

    string_view outcome = "invalid";
    return outcome;
  }
}

void output(int day, int month, int year, string_view outcome) {

  cout << day << "/" << month << "/" << year << " is a " << outcome << " date!\n";
}

*/

int main() {

  int dayNumber{}, monthNumber{}, yearNumber{}; string_view validResult{}; 
  dayNumber = day(), monthNumber = month(), yearNumber = year(), validResult = dateCheck(dayNumber, monthNumber, yearNumber), output(dayNumber, monthNumber, yearNumber, validResult);
  return 0;
}
