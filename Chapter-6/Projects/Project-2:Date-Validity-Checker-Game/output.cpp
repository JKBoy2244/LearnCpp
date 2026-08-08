#include <iostream>
#include <string_view>
using namespace std;

#include "output.h";

void output(int dayDate, int monthDate, int yearDate, string_view outcome) {

  cout << dayDate << "/" << monthDate << "/" << yearDate << " is a " << outcome << " date!\n";
}
