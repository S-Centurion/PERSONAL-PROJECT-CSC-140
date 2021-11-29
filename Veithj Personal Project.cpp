// Veithj Personal Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//BLADE RUNNER: DIMINISHING RETURNS DEMO
//John Veith
//11-29-2021

//List of Used .h Files
/*
#include <iostream>
#include "ConsoleColor.h"
#include <windows.h>
#include <mmsystem.h>
#include <vector>
#include <string>
#include "Inventory.h"
#include "Text.h"
#include "Test.h"
#include "ActOne.h"
#include "Start.h"
#include "Start.h"
*/

#include "Start.h"
#include <stdexcept>

using namespace std;


int main()
{
    int time = 0;

    try
    {
        PlaySound(TEXT("End Titles.wav"), NULL, SND_LOOP | SND_ASYNC);

        time += Title();
        time += help();

        if (time != 2)
        {
            throw runtime_error("RUNTIME_ERROR_CODE_1");
        }

        PlaySound(TEXT("Blade Runner Blues.wav"), NULL, SND_LOOP | SND_ASYNC);
        
        time += Intro();

        if (time != 3)
        {
            throw runtime_error("RUNTIME_ERROR_CODE_2");
        }

        time += OpeningNarration();
        time += ConversationWithLieu();

        if (time != 5)
        {
            throw runtime_error("RUNTIME_ERROR_CODE_3");
        }

        time += TransitionOne();
        time += Scene0();

        if (time != 7)
        {
            throw runtime_error("RUNTIME_ERROR_CODE_4");
        }

        time += SceneA();
        time += SceneB();
        time += SceneC();

        if (time != 10)
        {
            throw runtime_error("RUNTIME_ERROR_CODE_5");
        }
        
        time += SceneD();
        time += SceneE();
        time += SceneF();

        if (time != 13)
        {
            throw runtime_error("RUNTIME_ERROR_CODE_6");
        }

        PlaySound(TEXT("End Titles.wav"), NULL, SND_LOOP | SND_ASYNC);

        time += end();

        if (time != 14)
        {
            throw runtime_error("RUNTIME_ERROR_CODE_7");
        }
    }

    catch (runtime_error& excpt)
    {
        string exit;

        system("CLS");
        cout << excpt.what() << endl << endl;
        cout << "PRESS ANY KEY AND ENTER TO EXIT\n>";
        getline(cin, exit);
    }
}


