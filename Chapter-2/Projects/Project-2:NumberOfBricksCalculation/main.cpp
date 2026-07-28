#include <iostream>
using namespace std;

double cuboidHouseVolume() {

  cout << "Enter the height of the cuboid portion of a house in metres?\n";
  double cuboidHeight {};
  cin >> cuboidHeight;

  cout << "Enter the width of the cuboid portion of the house in metres?\n";
  double cuboidWidth {};
  cin >> cuboidWidth;

  cout << "Enter the length of the cuboid portion of the house in metres?\n";
  double cuboidLength {};
  cin >> cuboidLength;

  double cuboidVolume {cuboidHeight * cuboidWidth * cuboidLength};
  std << cout << "The volume of the cuboid portion of the house is " << cuboidVolume << " metres cubed\n";

  return cuboidVolume;
}

double triangularPrismHouseVolume(double cuboidLength, double cuboidWidth) {

  cout << "Now for the triangular prism portion of the house enter the height of the prism portion of the house in metres (length and width already obtained)?\n";
  double prismHeight {};
  cin >> prismHeight;

  double prismVolume {cuboidLength * cuboidWidth * prismHeight}
  std << cout << "The volume of the prism portion of the house is " << prismVolume << " metres cubed\n";

  return prismVolume;
}
