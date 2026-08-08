#include <iostream>
#include <string_view>
using namespace std;

#include "output.h";

void output(int dayDate, int monthDate, int yearDate, string_view outcome) {

  cout << day << "/" << month << "/" << year << " is a " << outcome << " date!\n";
}
