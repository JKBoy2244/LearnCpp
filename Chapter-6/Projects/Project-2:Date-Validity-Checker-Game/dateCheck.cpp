#include <iostream>
#include <string>
#include <string_view>
using namespace std;

#include "dateCheck.h"

string_view dateCheck(int day, string month, int year) {

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
