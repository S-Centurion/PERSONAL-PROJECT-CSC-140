#include <iostream>
#include "ConsoleColor.h"
#include <windows.h>
#include <mmsystem.h>
#include <vector>
#include <string>
#include "Text.h"

using namespace std;


void title()
{
    const int BREAK_L = 6000, BREAK_S = 2500, BREAK_VS = 1250, BREAK_SL = 4000;

    Sleep(BREAK_S);

    cout << red;

    cout << " ____    _                  _____    ______     _____    _    _   _   _   _   _   ______   _____  \n";
    Sleep(BREAK_VS);
    cout << "|  _ \\  | |          /\\    |  __ \\  |  ____|   |  __ \\  | |  | | | \\ | | | \\ | | |  ____| |  __ \\ \n";
    Sleep(BREAK_VS);
    cout << "| |_) | | |         /  \\   | |  | | | |__      | |__) | | |  | | |  \\| | |  \\| | | |__    | |__) | \n";
    Sleep(BREAK_VS);
    cout << "|  _ <  | |        / /\\ \\  | |  | | |  __|     |  _  /  | |  | | | . ` | | . ` | |  __|   |  _  / \n";
    Sleep(BREAK_VS);
    cout << "| |_) | | |____   / ____ \\ | |__| | | |____    | | \\ \\  | |__| | | |\\  | | |\\  | | |____  | | \\ \\ \n";
    Sleep(BREAK_VS);
    cout << "|____/  |______| /_/    \\_\\|_____/  |______|   |_|  \\_\\  \\____/  |_| \\_| |_| \\_| |______| |_|  \\_\\ \n";
    Sleep(BREAK_S);

    cout << ": DIMINISHING RETURNS";
    Sleep(BREAK_SL);

    cout << white;
    cout << "\n\n\n\n\n\n\n\n\n\n";
    press();
}

void help()
{
    const int BREAK_SL = 4000;

    cout << "**********Command List**********\n\n\n"
        << "INVESTIGATE <object>\n\n"
        << "TALK TO <person>\n\n"
        << "OPEN INVENTORY\n\n\n\n\n";

    Sleep(BREAK_SL);
    press();
}

void intro()
{
    const int BREAK_L = 5000, BREAK_S = 2500, BREAK_VS = 1250;

    cout << white;

    Sleep(BREAK_S);

    fDisp("In the beginning of the early 21st Century, the Nexus 6 Replicant was created by Tyrell Corporation.\n");
    fDisp("Although they appear to be human, these beings are capable of unnatural strength.\n\n");

    Sleep(BREAK_L);

    fDisp("Replicants were made to serve in the workforce under the harshest of conditions\n");

    Sleep(BREAK_VS);

    disp("as ");
    cout << red;
    disp("slaves.\n\n");
    cout << white;

    Sleep(BREAK_S);

    fDisp("Shortly after the creation of the Nexus 6, a violent off-world rebellion\n");
    fDisp("prompted government action. This new mandate required the \"retirement\" of all Replicants.\n\n");

    Sleep(BREAK_L);

    fDisp("This retirement was performed by an elite police officer\n");

    Sleep(BREAK_VS);

    cout << red;
    disp("- the Blade Runner - ");
    cout << white;

    Sleep(BREAK_VS);

    fDisp("solely tasked to hunt down and kill Replicants.\n\n");

    Sleep(BREAK_S);

    fDisp("Despite the efforts of the Blade Runner Unit, the rebellions escalated.\n");
    fDisp("Eventually, the founder of Tyrell Corporation - Eldon Tyrell - was murdered by a Nexus 6.\n\n");

    Sleep(BREAK_L);

    fDisp("Unknown to the general public, the Corporation continued to perfect their creation with the Nexus 8.\n\n");

    Sleep(BREAK_S);

    fDisp("The exact number of Nexus 7 Replicants is also\n");

    Sleep(BREAK_VS);

    cout << red;
    disp("unknown.\n\n\n\n");
    cout << white;

    Sleep(BREAK_L);

    press();
}
