#ifndef HOUSEVOLUME
#define HOUSEVOLUME 

double HouseVolume() {

  cout << "Enter the height of the cuboid portion of a house in metres?\n";  //Height is one measurement tool needed to calculate the cuboid portion of the house (along with width and length)
  double cuboidHeight {};
  cin >> cuboidHeight;

  cout << "Enter the width of the cuboid portion of the house in metres?\n";  //Width is one measurement tool needed to calculate the cuboid portion of the house (along with width and height)
  double cuboidWidth {};
  cin >> cuboidWidth;

  cout << "Enter the length of the cuboid portion of the house in metres?\n";  //Length is one measurement tool needed to calculate the cuboid portion of the house (along with width and height)
  double cuboidLength {};
  cin >> cuboidLength;

  double cuboidVolume {cuboidHeight * cuboidWidth * cuboidLength};
  cout << "The volume of the cuboid portion of the house is " << cuboidVolume << " metres cubed\n";   //Find the total volume of the cuboid portion of the house

  //As width and length values are stored, this is important for calculating the volume of the triangular portion of the house
  cout << "Now for the triangular prism portion of the house enter the height of the prism portion of the house in metres (length and width already obtained)?\n";
  double prismHeight {};          
  cin >> prismHeight;

  double prismVolume {0.5 * cuboidLength * cuboidWidth * prismHeight};
  cout << "The volume of the prism portion of the house is " << prismVolume << " metres cubed\n";           //Find the total volume of the triangular prism portion of the house

  double houseVolume {cuboidVolume + prismVolume};
  cout << "The volume of the house is " << houseVolume << " metres cubed\n";                         //Combines the 2 returned values passed as parameters to find the final volume of the whole house
  return houseVolume;
  
}
