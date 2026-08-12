#include <iostream>
using namespace std;

#include "physicsGrade.h"

namespace physics {
  int physicsGrade() {

    cout << "Enter your GCSE physics grade?\n"; 
    [[maybe_unused]] int physicsGrade {};
    cin >> physicsGrade;
    bool validPhysicsGrade {physicsGrade >= constants::minGrade && physicsGrade <= constants::maxGrade};
    int finalPhysicsGrade {(validPhysicsGrade) ? physicsGrade : 0};
    return finalPhysicsGrade;

  }
}
