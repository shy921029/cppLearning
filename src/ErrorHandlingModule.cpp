#include <iostream>

#include "ErrorHandlingModule.h"

namespace ErrorHandling
{
    using namespace std;
    void Initialise()
    {
        cin.exceptions(cin.failbit);
    }

    int HandleNotNumberError()
    {
        cerr << "not a number" << endl;
        cin.clear();
        char badInput[5]; // eat bad input up to 5 characters
        cin >> badInput;
        return 1;
    }
}