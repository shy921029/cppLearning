#ifndef ErrorHandlingMoudleH
#define ErrorHandlingModuleH

#include <stdexcept>

namespace ErrorHandling
{
    using namespace std;

    void Initialise();

    int HandleNotNumberError();

    int HandleRuntimeError(runtime_error theRuntimeError);
}

#endif