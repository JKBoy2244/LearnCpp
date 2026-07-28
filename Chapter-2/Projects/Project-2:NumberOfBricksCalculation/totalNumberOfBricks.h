#ifndef TOTALNUMBEROFBRICKS
#define TOTALNUMBEROFBRICKS

int totalNumberOfBricks(double houseVolume, double brickVolume) {

  int numberOfBricks (houseVolume / brickVolume); 
  cout << "The total Number of whole bricks you need is " << numberOfBricks << " bricks.\n";                                     //Total number of whole bricks required to build a full house
  return numberOfBricks;
}

#endif
