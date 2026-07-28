#ifndef ONEBRICKVOLUME
#define ONEBRICKVOLUME

double oneBrickVolume() {                                                                                     /*Similar process for both separate portions of the house however here, it's only a volume of a brick.
                                                                                                              This is very important because it's used to calculate how many whole bricks are needed to build a house
                                                                                                              */
  
  cout << "Enter the height of a small brick used to build the house in metres?\n";                                     
  double brickHeight {};                                                                                        
  cin >> brickHeight;                                                                                         

  cout << "Enter the width of a small brick used to build the house in metres?\n";
  double brickWidth {};
  cin >> brickWidth;

  cout << "Enter the length of a small brick used to build the house in metres?\n";
  double brickLength {};
  cin >> brickLength;

  double brickVolume {brickHeight * brickWidth * brickLength};
  cout << "The volume of the one brick of the house is " << brickVolume << " metres cubed\n";

  return brickVolume;
  
}
