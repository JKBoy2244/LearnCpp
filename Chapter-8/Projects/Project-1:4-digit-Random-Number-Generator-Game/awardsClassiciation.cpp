#include <iostream>
#include <string_view>
using namespace std;

#include "awardsClassiciation.h"

namespace Award {
  string_view awardsClassification(int points) {

    if (points >= 880) {

       string_view medal = "platinum";
       return medal;
    }

    else if (points >= 680 && points < 880) {

      string_view medal = "gold";
      return medal;
    }

    else if (points >= 480 && points < 680) {

      string_view medal = "silver";
      return medal;
    }

    else if (points >= 180 && points < 480) {

      string_view medal = "bronze";
      return medal;
    }

    else {

      string_view medal = "participation";
      return medal;
    }
  }
}
