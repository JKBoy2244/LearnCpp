#include <iostream>
#include <string_view>
using namespace std;

#include "output.h";

void output(int day, int month, int year, string_view outcome) {

  cout << day << "/" << month << "/" << year << " is a " << outcome << " date!\n";
}
