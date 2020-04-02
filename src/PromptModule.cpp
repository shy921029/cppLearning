#include <iostream>
#include <string>

#include "PromptModule.h"

using namespace std;

void PauseForUserAcknowledge()
{
    char stopCharacter;
    cout << endl << "Press any key and \"Enter\": ";
    cin >> stopCharacter;
}

bool UserWantsToContinue(std::string theThingWeAreDoing)
{
    char DoneCharacter;
    cout << endl << theThingWeAreDoing
        << " Press \"y\" or \"n\" and \"Enter\": ";
    
    cin >> DoneCharacter;
    if (DoneCharacter == 'y') // "" char*
        return true; //return true when not "n"
    else
    {
        return false;
    }    
}