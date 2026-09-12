#include <cassert>
#include <iostream>

#include "../awardsClassification.h"

int main() 
{
    for (int awardTest{ 0 }; awardTest <= 1000; ++awardTest)
    {
        if (awardTest >= 880)
        {
            assert(Award::awardsClassification(awardTest) == "platinum" );
        }
            
        else if (awardTest >= 680)
        {
            assert(Award::awardsClassification(awardTest) == "gold");       
        }
            
        else if (awardTest >= 480)
        {
            assert(Award::awardsClassification(awardTest) == "silver");
        }
            
        else if (awardTest >= 300)
        {
            assert(Award::awardsClassification(awardTest) == "bronze");
        }
            
        else
        {
            assert(Award::awardsClassification(awardTest) == "participation");
        }
    }

    std::cout << "All award classification tests passed!\n";

    return 0;
}
