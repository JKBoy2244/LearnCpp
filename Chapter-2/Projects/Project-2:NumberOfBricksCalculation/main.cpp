#include <iostream>
using namespace std;

double cuboidHouseVolume() {

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

  return cuboidVolume;
}

double triangularPrismHouseVolume(double cuboidLength, double cuboidWidth) {

  cout << "Now for the triangular prism portion of the house enter the height of the prism portion of the house in metres (length and width already obtained)?\n";
  double prismHeight {};
  cin >> prismHeight;                                                                                          //As width and length values are stored, this is important for calculating the volume of the triangular portion of the house

  double prismVolume {0.5 * cuboidLength * cuboidWidth * prismHeight};
  cout << "The volume of the prism portion of the house is " << prismVolume << " metres cubed\n";           //Find the total volume of the triangular prism portion of the house

  return prismVolume;
}

double totalVolume(double cuboidVolume, double prismVolume) {

  double houseVolume {cuboidVolume + prismVolume};
  cout << "The volume of the house is " << houseVolume << " metres cubed\n";                         //Combines the 2 returned values passed as parameters to find the final volume of the whole house
  return houseVolume;
}

double oneBrickVolume() {

  cout << "Enter the height of a small brick used to build the house?\n";                                     /*Similar process for both separate portions of the house however here, it's only a volume of a brick.
  double brickHeight {};                                                                                        This is very important because it's used to calculate how many whole bricks are needed to build a house
  cin >> brickHeight;                                                                                         */

  cout << "Enter the width of a small brick used to build the house?\n";
  double brickWidth {};
  cin >> brickWidth;

  cout << "Enter the length of a small brick used to build the house?\n";
  double brickLength {};
  cin >> brickLength;

  double brickVolume {brickHeight * brickWidth * brickLength};
  cout << "The volume of the cuboid portion of the house is " << brickVolume << " metres cubed\n";

  return brickVolume;
  
}

int totalNumberOfBricks(double houseVolume, double brickVolume) {

  int totalNumberOfBricks (houseVolume / brickVolume); 
  cout << "The total Number of whole bricks you need is " << totalNumberOfBricks << " bricks.\n";                                     //Total number of whole bricks required to build a full house
  return numberOfBricks;
}

void workRate(int numberOfBricks) {

  cout << "Enter the number of workers for this building project?\n";                                     //The number of workers affect how quickly it can take to build a house. More workers mean less time (& vice-versa)
  int numberOfWorkers {};
  cin >> numberOfWorkers;

  cout << " ---------------------------------------------------------------------------------------------------------------------------------- \n";
  double days {numberOfBricks / numberOfWorkers};
  double hours {days * 24};
  double minutes {hours * 60};
  double seconds {minutes * 60};
  double weeks {days / 7};
  double months {weeks / 4.33};
  double years {months / 12};

  cout << "The total Number of whole bricks you need is " << numberOfBricks << " bricks.\n";
  cout << "The total number of seconds this will take to build a full house from scratch is: " << seconds << " seconds\n";                //This block part tells you the time taken to complete the work in various formats
  cout << "The total number of minutes this will take to build a full house from scratch is: " << minutes << " minutes\n";
  cout << "The total number of hours this will take to build a full house from scratch is: " << hours << " hours\n";
  cout << "The total number of days this will take to build a full house from scratch is: " << days << " days\n";
  cout << "The total number of weeks this will take to build a full house from scratch is: " << weeks << " weeks\n";
  cout << "The total number of months this will take to build a full house from scratch is: " << months << " months\n";
  cout << "The total number of years this will take to build a full house from scratch is: " << years << " years\n";
  
  cout << " -------------------------------------------------------------------------------------------------------------------------- \n";
  
}

int main() {

  double cuboidVolume = cuboidHouseVolume();
  double prismVolume = triangularPrismHouseVolume(cuboidLength, cuboidWidth);                       //Compiler executes this main function in sequential order
  double houseVolume = totalVolume(cuboidVolume, prismVolume);
  double brickVolume = oneBrickVolume();
  int numberOfBricks = totalNumberOfBricks(houseVolume, brickVolume);
  workRate(numberOfBricks);
  
  return 0;
}
