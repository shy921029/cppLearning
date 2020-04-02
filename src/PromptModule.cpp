#include <iostream>

#include "PromptModule.h"

using namespace std;

void PauseForUserAcknowledge()
{
    char stopCharacter;
    cout << endl << "press any key and \"Enter\": ";
    cin >> stopCharacter;
}