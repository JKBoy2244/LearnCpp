#include <cassert>
#include <iostream>

#include "../awardClassification.h"

int main() {

    for (int awardTest {1000}; awardTest >= 0; --awardTest) 
    {

        assert(Award::awardsClassification( (awardTest >= 880) && (awardTest <= 1000) ) == "platinum");
        assert(Award::awardsClassification( (awardTest >= 680) && (awardTest <= 879) ) == "gold");
        assert(Award::awardsClassification( (awardTest >= 480) && (awardTest <= 679) ) == "silver");
        assert(Award::awardsClassification( (awardTest >= 300) && (awardTest <= 479 )) == "bronze");
        assert(Award::awardsClassification( (awardTest < 300) == "participation");
   }

    std::cout << "All award classification tests passed!";
}
