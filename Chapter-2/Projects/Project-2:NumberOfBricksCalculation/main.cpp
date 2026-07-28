#include <iostream>
using namespace std;

#include "HouseVolume.h"
#include "oneBrickVolume.h"
#include "totalNumberOfBricks.h"
#include "workRate.h"

int main() {
  
  double houseVolume = HouseVolume();                                             //Compiler executes this main function in sequential order
  double brickVolume = oneBrickVolume();
  int numberOfBricks = totalNumberOfBricks(houseVolume, brickVolume);
  workRate(numberOfBricks);
  
  return 0;
}
