//#include <iostream>
#include "ConsoleColor.h"
//#include <windows.h>
//#include <mmsystem.h>
//#include <vector>
//#include <string>
#include "Test.h"

using namespace std;


void Title()
{
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

    cout << ": DIMINISHING RETURNS DEMO";
    Sleep(BREAK_L);

    cout << white;
    cout << "\n\n\n\n\n\n\n\n\n\n";
    press();
}

void Intro()
{
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
    system("CLS");
}

void OpeningNarration()
{
    Sleep(BREAK_L);

    cout << red;
    fDisp("Unknown:\n");
    cout << white;
    Sleep(BREAK_VS);

    fDisp("-(Another crack of thunder. Why does it always have to be raining in this city?\n");
    Sleep(BREAK_VS);
    fDisp("  Should've gone off-world a long time ago with the other colonists.)\n\n");
    Sleep(BREAK_VS);

    fDisp("-(But then I guess");
    cout << red;
    fDisp(" Blade Runners ");
    cout << white;
    fDisp("aren't necessarily known for their wisdom.)\n\n\n");

    Sleep(BREAK_L);

    disp("*Rain bombards a man in a dark overcoat. He's walking through an overstuffed sidestreet\n");
    disp("packed with people. Televised advertisements loop on the towers above him drowning\n");
    disp("out surrounding conversation and neon lights pierce through the night.*\n\n\n");

    Sleep(BREAK_L);

    fDisp("Unknown:\n");
    Sleep(BREAK_VS);

    fDisp("-(Let's see what wisdom the news has to offer.)\n\n\n");

    Sleep(BREAK_L);

    disp("*He walks to a vending machine nearby and buys a newspaper. He reads it.*\n\n\n");

    Sleep(BREAK_L);

    fDisp("Newspaper:\n");
    Sleep(BREAK_VS);
    fDisp("-(\"FIRE ERUPTS IN EMPTY TYRELL CORPORATE OFFICE. THIRD FIRE IN THREE DAYS.\n");
    Sleep(BREAK_VS);
    fDisp("   REPLICANT SUSPECTED.\")\n\n\n");

    Sleep(BREAK_L);

    fDisp("Unknown:\n");
    Sleep(BREAK_VS);

    fDisp("-(Another one. Wonder which one of us got assigned that job.)\n\n");
    Sleep(BREAK_VS);

    fDisp("-(More fires means no leads, or next to none.\n");
    Sleep(BREAK_VS);
    fDisp("  Knowing my luck, I'll be assigned to my own hunt soon enough.)\n\n");
    Sleep(BREAK_VS);

    fDisp("-(Whoever keeps setting these fires is consistent. If a replicant really is\n");
    Sleep(BREAK_VS);
    fDisp("  doing this, I don't suspect the pattern will stop. Replicants don't like\n");
    Sleep(BREAK_VS);
    fDisp("  to break from their patterns.)\n\n");
    Sleep(BREAK_VS);

    fDisp("-(I wonder how the news suspects a replicant. No way could they ever find out\n");
    Sleep(BREAK_VS);
    fDisp("  from us. The department barely lets us share case information with each other.\n");
    Sleep(BREAK_VS);
    fDisp("  Then again, it's never been easier to suspect a replicant these days.\n");
    Sleep(BREAK_VS);
    fDisp("  But I guess that's always been easy.)\n\n\n");

    Sleep(BREAK_L);

    cout << red;
    fDisp("***BEEP BEEP, BEEP BEEP, BEEP BEEP***\n\n\n");
    cout << white;

    Sleep(BREAK_S);

    fDisp("Unknown:\n");
    Sleep(BREAK_VS);

    fDisp("-(Of course.)\n\n\n");

    Sleep(BREAK_L);

    press();
    system("CLS");
}

void ConversationWithLieu()
{
    Sleep(BREAK_L);

    disp("*A small device beeps next to the weapon on the man's belt. Text on the device reads,\n");
    disp("\"Lieutenant O'Hara\"*\n\n\n");

    Sleep(BREAK_L);

    fDisp("Unknown:\n");
    Sleep(BREAK_VS);

    fDisp("-(I should probably");
    cout << green;
    disp(" TALK_TO Lieutenant_O'Hara");
    cout << white;
    fDisp(".)\n\n\n>");

    
    string answer1;

    getline(cin, answer1);

    while (answer1 != "TALK_TO Lieutenant_O'Hara")
    {
        fDisp("\n\n");

        fDisp("Unknown:\n");
        Sleep(BREAK_VS);

        fDisp("-(That's not right...)\n\n");
        Sleep(BREAK_VS);

        fDisp("-(I should probably");
        cout << green;
        disp(" TALK_TO Lieutenant_O'Hara");
        cout << white;
        fDisp(".)\n\n\n>");
        
        getline(cin, answer1);
    }

    
    fDisp("\n\n");

    Sleep(BREAK_L);

    disp("*The man answers the call.*\n\n\n");

    Sleep(BREAK_L);

    cout << red;
    fDisp("Lieutenant O'Hara:\n");
    Sleep(BREAK_VS);
    cout << white;

    fDisp("-\"Fairchild? You still on patrol?\"\n\n\n");
    Sleep(BREAK_S);

    cout << red;
    fDisp("Fairchild:\n");
    Sleep(BREAK_VS);
    cout << white;

    fDisp("-\"No place I'd rather be at 2:30 in the morning Lieu.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Lieutenant O'Hara:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Sorry to tear you from it then. It's another fire, but we might've\n");
    Sleep(BREAK_VS);
    fDisp("  gotten lucky this time. Fire brigade arrived on the scene before\n");
    Sleep(BREAK_VS);
    fDisp("  it got out of hand, and we need someone there ASAP.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Fairchild:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Which is...?\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Lieutenant O'Hara:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Close by. It's another connection to Tyrell. I'll send the\n");
    Sleep(BREAK_VS);
    fDisp("  directions to you on your com.\"\n\n");
    Sleep(BREAK_VS);

    fDisp("-\"Another thing. This one's a little different from the others.\n");
    Sleep(BREAK_VS);
    fDisp("  We've got a body as well as a potential witness. Whoever is\n");
    Sleep(BREAK_VS);
    fDisp("  behind this is getting messy and desperate.\"\n\n");
    Sleep(BREAK_VS);

    fDisp("-\"We've cleared out all the first responders so you should have\"\n");
    Sleep(BREAK_VS);
    fDisp("  the area pretty much to yourself. Officer Moore is stationed\n");
    Sleep(BREAK_VS);
    fDisp("  at the scene to fill you in on the details.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Fairchild:\n");
    Sleep(BREAK_VS);

    fDisp("-\"And the potential witness?\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Lieutenant O'Hara:\n");
    Sleep(BREAK_VS);

    fDisp("-\"We made sure he stayed put with Officer Moore at the scene.\n");
    Sleep(BREAK_VS);
    fDisp("  Do what you need to do. Don't let this thing go cold, ok");
    cout << red;
    fDisp(" Jack?\n");
    cout << white;
    Sleep(BREAK_VS);
    fDisp("  Let's light a fire of our own underneath this guy.\"\n\n\n");
    Sleep(BREAK_S);

    cout << red;
    fDisp("Jack ");
    cout << white;

    fDisp("Fairchild:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Can do. Signing off.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Lieutenant O'Hara:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Signing off.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Jack Fairchild:\n");
    Sleep(BREAK_VS);

    fDisp("-(Sooner I get there, the better.)\n\n\n");

    press();
    system("CLS");
}

