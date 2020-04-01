#include <iostream>

using namespace std;

void Initialise()
{
    cin.exceptions(cin.failbit);
}

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

int HandleNotNumberError()
{
    cerr << "not a number" << endl;
    cin.clear();
    char badInput[5]; // eat bad input up to 5 characters
    cin >> badInput;
    return 1;
}

void PauseForUserAcknowledge()
{
    char stopCharacter;
    cout << endl << "press any key and \"Enter\": ";
    cin >> stopCharacter;
}

int main(int argc, char* argv[])
{
    Initialise();
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
        ReturnCode = HandleNotNumberError();
    }

    PauseForUserAcknowledge();
    return ReturnCode;
}