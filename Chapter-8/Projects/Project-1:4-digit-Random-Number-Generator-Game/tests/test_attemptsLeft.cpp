#include <cassert>
#include <iostream>

#include "../attemptsLeft.h"
#include "../constants.h"

int main()
{
    assert(Attempts::attemptsLeft(constants::maxChances, 0) == 20);
    assert(Attempts::attemptsLeft(constants::maxChances, 1) == 19);
    assert(Attempts::attemptsLeft(constants::maxChances, 2) == 18);
    assert(Attempts::attemptsLeft(constants::maxChances, 3) == 17);
    assert(Attempts::attemptsLeft(constants::maxChances, 4) == 16);
    assert(Attempts::attemptsLeft(constants::maxChances, 5) == 15);
    assert(Attempts::attemptsLeft(constants::maxChances, 6) == 14);
    assert(Attempts::attemptsLeft(constants::maxChances, 7) == 13);
    assert(Attempts::attemptsLeft(constants::maxChances, 8) == 12);
    assert(Attempts::attemptsLeft(constants::maxChances, 9) == 11);
    assert(Attempts::attemptsLeft(constants::maxChances, 10) == 10);
    assert(Attempts::attemptsLeft(constants::maxChances, 11) == 9);
    assert(Attempts::attemptsLeft(constants::maxChances, 12) == 8);
    assert(Attempts::attemptsLeft(constants::maxChances, 13) == 7);
    assert(Attempts::attemptsLeft(constants::maxChances, 14) == 6);
    assert(Attempts::attemptsLeft(constants::maxChances, 15) == 5);
    assert(Attempts::attemptsLeft(constants::maxChances, 16) == 4);
    assert(Attempts::attemptsLeft(constants::maxChances, 17) == 3);
    assert(Attempts::attemptsLeft(constants::maxChances, 18) == 2);
    assert(Attempts::attemptsLeft(constants::maxChances, 19) == 1);
    assert(Attempts::attemptsLeft(constants::maxChances, 20) == 0);

    std::cout << "All attempts-left tests passed!\n";

    return 0;
}
