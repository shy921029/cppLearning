#include <iostream>

#include "PromptModule.h"
#include "ErrorHandlingModule.h"

using namespace std;

float GetCin(string words, float num)
{
    cout << words;
    cin >> num;
    return num;
}

float DoDivide(const float dividend, const float divisor)
{
    return (dividend / divisor);
}

int main(int argc, char* argv[])
{
    ErrorHandling::Initialise();
    int ReturnCode = 0;

    try
    {
        float dividend = GetCin("dividend: ", dividend);
        float divisor = GetCin("divisor: ", divisor);
        float result = DoDivide(dividend, divisor);
        cout << result << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        ReturnCode = ErrorHandling::HandleNotNumberError();
    }

    PauseForUserAcknowledge();
    return ReturnCode;
}