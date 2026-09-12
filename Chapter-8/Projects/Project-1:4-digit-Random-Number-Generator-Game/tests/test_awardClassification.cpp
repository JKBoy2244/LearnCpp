#include <cassert>
#include <iostream>

#include "../awardClassification.h"

int main() {

    assert(Award::awardsClassification(1000) == "platinum");
    assert(Award::awardsClassification(900) == "platinum");
    assert(Award::awardsClassification(800) == "platinum");
    assert(Award::awardsClassification(700) == "platinum");
    assert(Award::awardsClassification(600) == "platinum");
    assert(Award::awardsClassification(500) == "platinum");
    assert(Award::awardsClassification(400) == "platinum");
    assert(Award::awardsClassification(300) == "platinum");
    assert(Award::awardsClassification(200) == "platinum");
    assert(Award::awardsClassification(100) == "platinum");
    assert(Award::awardsClassification(0) == "platinum");

    std::cout << "All award classification tests passed!";
}
