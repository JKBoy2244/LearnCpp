#include <cassert>
#include <iostream>

#include "../randomNumber.h"
#include "../constants.h"

// Compile-time checks
static_assert(constants::minNumber >= 1000);
static_assert(constants::maxNumber <= 9999);
static_assert(constants::minNumber < constants::maxNumber);

int main()
{
    // Runtime tests
    for (int test{ 0 }; test < 1000; ++test)
    {
        int number{ Generate::randomNumber() };

        assert(number >= constants::minNumber);
        assert(number <= constants::maxNumber);
    }

    std::cout << "All tests passed successfully!\n";

    return 0;
}
