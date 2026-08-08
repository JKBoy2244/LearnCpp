#include <iostream>
#include <string_view>
using namespace std;

#include "dateCheck.h"

string_view dateCheck(int dayDate, int monthDate, int yearDate) {

  bool thirtyDayRange {((monthDate == 4) || (monthDate == 6) || (monthDate == 9) || (monthDate == 11)) && (yearDate >= 1950 && yearDate <= 2050) && (dayDate >= 1 && dayDate <= 30)};                                                             //Conditions list for dates
  bool thirtyOneDayRange {((monthDate == 1) || (monthDate == 3) || (monthDate == 5) || (monthDate == 7) || (monthDate == 8) || (monthDate == 10) || (monthDate == 12)) && (yearDate >= 1950 && yearDate <= 2050) && (dayDate >= 1 && dayDate <= 31)};
  bool februaryRange {(yearDate % 400 == 0) || ((yearDate % 4 == 0) && (yearDate % 100 != 0)) ? ((monthDate == 2) && (yearDate >= 1950 && yearDate <= 2050) && (dayDate >= 1 && day <= 29)) : ((monthDate == 2) && (yearDate >= 1950 && yearDate <= 2050) && 
                      (dayDate >= 1 && dayDate <= 28))};

  if ((thirtyDayRange) || (thirtyOneDayRange) || (februaryRange)) {

    string_view outcome = "valid";                                                    //Date Checker part
    return outcome; 
  } else {

    string_view outcome = "invalid";
    return outcome;
  }
}
