// Veithj Personal Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//BLADE RUNNER: DIMINISHING RETURNS

#include <iostream>
/*#include "ConsoleColor.h"
#include <windows.h>
#include <mmsystem.h>
#include <vector>
#include <string>
#include "Inventory.h"
#include "Text.h"
*/
#include "Start.h"
/*
#include "Test.h"
#include "ActOne.h"
*/

using namespace std;


int main()
{
    const int BREAK_L = 6000, BREAK_S = 2500, BREAK_VS = 1250;

    PlaySound(TEXT("End Titles.wav"), NULL, SND_ASYNC);
    title();
    system("CLS");

    help();
    system("CLS");

    PlaySound(TEXT("Blade Runner Blues.wav"), NULL, SND_ASYNC);
    intro();

    
}



