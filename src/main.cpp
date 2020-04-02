#include <iostream>

#include "PromptModule.h"
#include "ErrorHandlingModule.h"

using namespace std;

float GetOperator(string words)
{
    cout << words;
    char Operator;
    cin >> Operator;
    return Operator;
}

float GetOperand(string words)
{
    cout << words;
    float Operand;
    cin >> Operand;
    return Operand;
}

float Accumulate(const char Operator, const float Operand)
{
    static float myAccumulator = 0;
    switch (Operator)
    {
        case '+':
            myAccumulator = myAccumulator + Operand;
            break;
        case '-':
            myAccumulator = myAccumulator - Operand;
            break;
        case '*':
            myAccumulator = myAccumulator * Operand;
            break;
        case '/':
            myAccumulator = myAccumulator / Operand;
            break;    
        default:
            throw runtime_error("RuntimeError: Invalid operator");
            break;
    }
    return myAccumulator;
}

int main(int argc, char* argv[])
{
    ErrorHandling::Initialise();

    do
    {
        try
        {
            char Operator = GetOperator("Enter a Operator(+,-,*,/): ");
            float Operand = GetOperand("Enter a Operand: ");
            cout << Accumulate(Operator, Operand) << endl;
        }
        catch(runtime_error RuntimeError)
        {
            ErrorHandling::HandleRuntimeError(RuntimeError);
        }
        catch (...)
        {
            ErrorHandling::HandleNotNumberError();
        }
    }
    while (UserWantsToContinue("More?"));

    //PauseForUserAcknowledge();
    return 0;
}