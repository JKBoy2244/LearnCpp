#include <cassert>
#include <iostream>

#include "../attemptsLeft.h"
#include "../constants.h"

int main()
{

    for (int attemptsTest {0}; attemptsTest <= 20; ++attemptsTest) 
    {
        assert(Attempts::attemptsLeft(constants::maxChances, attemptsTest) == (20 - attemptsTest) );
    }
    
    std::cout << "All attempts-left tests passed!\n";

    return 0;
}
