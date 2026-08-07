#include <iostream>
#include <string>
using namespace std;

#include "quizFeedback.h"

string quizFeedback() {

    cout << "In a few senterences or few words if you want, tell me how you found this quiz overall? It's optional, so if you don't want to answer, it's fine, just write null or none or something like that???\n";
    string feedBack {};
    getLine(cin >> ws, feedBack);                       //Optional feedback (getline is used as if using cin only, the program only takes the first word ignoring the remaining words for a more than one word response)
    return feedBack;
}
