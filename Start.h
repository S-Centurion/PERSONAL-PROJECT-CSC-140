#include "ActOne.h"


int Title()
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

    Log log;
    log.add("LOG: Title passed successfully");
    return 1;
}

int Intro()
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

    Log log;
    log.add("LOG: Intro passed successfully");
    return 1;
}

int OpeningNarration()
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

    Log log;
    log.add("LOG: OpeningNarration passed successfully");
    return 1;
}

int ConversationWithLieu()
{
    Sleep(BREAK_L);

    disp("*A small device beeps next to the weapon on the man's belt. Text on the device reads,\n");

    cout << red;
    disp("\"Lieutenant O'Hara\"");
    disp("*\n\n\n");
    cout << white;

    Sleep(BREAK_L);

    fDisp("Unknown:\n");
    Sleep(BREAK_VS);

    fDisp("-(I should probably ");
    cout << green;
    disp("TALK_TO Lieutenant_O'Hara");
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
    Sleep(BREAK_L);

    press();
    system("CLS");

    Log log;
    log.add("LOG: ConversationWithLieu passed successfully");
    return 1;
}

int TransitionOne()
{
    Sleep(BREAK_L);

    disp("*Two figures stand in a dim hall. Rows of doors cover each side of the hall.\n");
    disp("A small window is cracked open on the far side letting in rain and the night\n");
    disp("air. An old elevator leads up to the floor on the other side, closer to the\n");
    disp("two figures. Both of these men appear middle-aged with medium builds. One is\n");
    disp("wearing a raggedy t-shirt with jeans while the other is dressed in a freshly\n");
    disp("pressed police officer's uniform. The former man is clearly nervous, but the\n");
    disp("officer appears to be keeping him close. They are standing directly in front\n");
    disp("of a wide open door.*\n\n\n");

    Sleep(BREAK_S);

    disp("*The elevator opens and");
    cout << red;
    disp(" Jack Fairchild ");
    cout << white;
    disp("walks into the hallway.*\n\n\n");

    Sleep(BREAK_L);

    cout << red;
    fDisp("Officer Moore:\n");
    cout << white;
    Sleep(BREAK_VS);

    fDisp("-\"Glad to see you here Jack. About time this was handed off to\n");
    Sleep(BREAK_VS);
    fDisp("  someone who knows what they're doing.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Jack Fairchild:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Nice to see you too ");
    cout << red;
    fDisp("Frank. ");
    cout << white;
    fDisp("And who's your friend there?\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Officer Moore:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Ah that would be our witness,");
    cout << red;
    fDisp(" Mr. Alan Miller. ");
    cout << white;
    fDisp("Only Mr. Miller\n");
    Sleep(BREAK_VS);
    fDisp("  has been less than forthcoming.\"\n\n\n");
    Sleep(BREAK_S);

    cout << red;
    fDisp("Alan Miller:\n");
    cout << white;
    Sleep(BREAK_VS);

    fDisp("-\"I didn't see his face! Only his back as he was running towards the\n");
    Sleep(BREAK_VS);
    fDisp("  stairs! Honest!\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Officer Moore:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Uh-huh. The firefighters were able to put out the fire so quick\n");
    Sleep(BREAK_VS);
    fDisp("  thanks to the efforts of Mr. Miller here. He says he called them\n");
    Sleep(BREAK_VS);
    fDisp("  in after hearing strange noises coming from inside. Says the door\n");
    Sleep(BREAK_VS);
    fDisp("  was open and he saw the fire. But apparently, the perp somehow\n");
    Sleep(BREAK_VS);
    fDisp("  busted out of the room without Mr. Helpful seeing his face.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Alan Miller:\n");
    Sleep(BREAK_VS);

    fDisp("-\"He was wearing a mask!\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Officer Moore:\n");
    Sleep(BREAK_VS);

    fDisp("-\"And maybe if you'd thought to mention that before, I'd believe\n");
    Sleep(BREAK_VS);
    fDisp("  you. Now can you just keep quiet for a minute?\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Alan Miller:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Of course.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Officer Moore:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Thank you. Anyway, the interruption means that our firebug\n");
    Sleep(BREAK_VS);
    fDisp("  must not have gotten the chance to put in his signature\n");
    Sleep(BREAK_VS);
    fDisp("  amount of effort. We've got a real chance here Jack.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Jack Fairchild:\n");
    Sleep(BREAK_VS);

    fDisp("-\"That's the hope. But what's the connection to Tyrell?\n");
    Sleep(BREAK_VS);
    fDisp("  All of the other fires were in some way connected and the\n");
    Sleep(BREAK_VS);
    fDisp("  Lieu mentioned this was no different.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Officer Moore:\n");
    Sleep(BREAK_VS);

    fDisp("-\"The other fires didn't come with bodies.\"\n\n");
    Sleep(BREAK_VS);

    fDisp("-\"Now, Mr. Miller, do you promise not to move a muscle if me\"\n");
    Sleep(BREAK_VS);
    fDisp("  and this nice man here leave you out in the hall for a minute?\"\n\n");
    Sleep(BREAK_VS);

    fDisp("-\"I don't think I need to explain why you don't want a\n  ");
    Sleep(BREAK_VS);
    cout << red;
    fDisp("Blade Runner ");
    cout << white;
    fDisp("chasing you down.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Alan Miller:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Of course! Of course.\"\n\n\n");

    Sleep(BREAK_L);

    disp("*Officer Moore motions for Jack to come inside. They leave Mr.\n");
    disp("Miller alone in the hall.*\n\n\n");

    Sleep(BREAK_L);

    fDisp("Officer Moore:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Well, here's our scene.\"\n\n\n");

    Sleep(BREAK_L);

    disp("*Jack and Officer Moore step into the center of a decrepit looking, one\n");
    disp("room living space. A body lies towards the center of the room, near a messy\n");
    disp("desk on the right side from the entryway. Immediately behind the desk is a\n");
    disp("square window covering the entire length of the right wall. Red curtains are\n");
    disp("drawn fully open on either side. A bed and a bookcase sit alongside the far\n");
    disp("wall across from the entryway, and a television sits along the left wall. A\n");
    disp("security camera is tucked into the upper corner. When looking at the entryway,\n");
    disp("a picture is hung on the left side while a mirror is hung on the right. A broken\n");
    disp("clock hangs directly underneath the mirror over a stack of suitcases by the\n");
    disp("television. Hanging overhead is a ceiling fan with four blades, one of them cracked.\n");
    disp("A faded rug lies underneath the corpse.*\n\n\n");

    Sleep(BREAK_L);

    fDisp("Officer Moore:\n");
    Sleep(BREAK_VS);

    fDisp("-\"Home sweet home. The vic has been ID'd as ");
    cout << red;
    fDisp("Mr. Henry O'Neil.\n");
    cout << white;
    Sleep(BREAK_VS);
    fDisp("  He was a corporate executive at Tyrell before he decided to\n");
    Sleep(BREAK_VS);
    fDisp("  retire to this humble abode about a month ago.\"\n\n");
    Sleep(BREAK_VS);

    fDisp("-\"We don't know too much else about him right now aside from\n");
    Sleep(BREAK_VS);
    fDisp("  what the landlord knows. Apparently the guy kept to himself\n");
    Sleep(BREAK_VS);
    fDisp("  and avoided chit-chat with the neighbors.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Jack Fairchild:\n");
    Sleep(BREAK_VS);

    fDisp("-\"I'm shocked.\"\n\n\n");
    Sleep(BREAK_S);

    fDisp("Officer Moore:\n");
    Sleep(BREAK_VS);

    fDisp("-\"I know.\"\n\n");
    Sleep(BREAK_VS);

    fDisp("-\"Should make for a fun investigation. I'll be out in the hall\n");
    Sleep(BREAK_VS);
    fDisp("  with Mr. Helpful if you need anything.\"\n\n");
    Sleep(BREAK_VS);

    cout << red;
    fDisp("-\"Good luck.\"\n\n\n");
    cout << white;

    Sleep(BREAK_L);

    press();
    system("CLS");

    Log log;
    log.add("LOG: TransitionOne passed successfully");
    return 1;
}

int Scene0()
{
    Sleep(BREAK_S);

    jack();
    fDisp("-(Alright Mr. O'Neil, who were you?)\n\n\n");

    Sleep(BREAK_S);

    disp("*Jack crouches by the corpse of Mr. Henry O'Neil. He pulls a pair of glasses\n");
    disp("out of his coat pocket. They have dark rims with square frames. They appear\n");
    disp("unassuming. He puts them on.*\n\n\n");

    Sleep(BREAK_S);

    jack();
    fDisp("-(Cause of death, multiple stab wounds. But I think\n  the ");
    cout << green;
    disp("Spectacles");
    cout << white;
    fDisp(" can do a little better than that...)\n\n\n");
    fDisp(">");


    string answer1;

    getline(cin, answer1);

    while (answer1 != "USE_ITEM Spectacles")
    {
        fDisp("\n\n");

        jack();
        fDisp("-(That's not right...)\n\n");
        Sleep(BREAK_VS);

        fDisp("-(I should probably");
        cout << green;
        disp(" USE_ITEM Spectacles");
        cout << white;
        fDisp(".)\n\n\n>");

        getline(cin, answer1);
    }


    fDisp("\n\n");

    Sleep(BREAK_S);

    disp("*At once, the image is magnified through the lenses of the glasses.*\n\n\n");

    Sleep(BREAK_S);

    jack();
    fDisp("-(That's better. Judging by the puncture depth, someone\n");
    fDisp("  very strong must've carried out the attack.)\n\n");
    Sleep(BREAK_VS);

    cout << red;
    fDisp("-(Very, very strong.)\n\n");
    Sleep(BREAK_VS);
    cout << white;

    fDisp("-(Should put on some gloves before I search the body.)\n\n");
    Sleep(BREAK_VS);

    fDisp("-(First things first, I hope I had the foresight to\n");
    fDisp("  have a pair on me. I need to ");
    cout << green;
    disp("check what I've got");
    cout << white;
    fDisp(".)\n\n\n>");


    string answer2;

    getline(cin, answer2);

    while (answer2 != "OPEN_INVENTORY")
    {
        fDisp("\n\n");

        jack();
        fDisp("-(That's not right...)\n\n");
        Sleep(BREAK_VS);

        fDisp("-(I should probably");
        cout << green;
        disp(" OPEN_INVENTORY");
        cout << white;
        fDisp(".)\n\n\n>");

        getline(cin, answer2);
    }

    Inv inventory;

    system("CLS");
    cout << "\t**********Inventory**********\n\n";
    inventory.viewAll();

    cout << "\n\n\n\n\n";
    Sleep(BREAK_VS);
    press();
    system("CLS");


    Sleep(BREAK_S);

    jack();
    fDisp("-(Alright, off to a good start. Let's use this pair\n");
    fDisp("  and get to work.)\n\n\n");
    fDisp(">");


    string answer3;

    getline(cin, answer3);

    while (answer3 != "USE_ITEM Gloves")
    {
        fDisp("\n\n");

        jack();
        fDisp("-(That's not right...)\n\n");
        Sleep(BREAK_VS);

        fDisp("-(I should probably");
        cout << green;
        disp(" USE_ITEM Gloves");
        cout << white;
        fDisp(".)\n\n\n>");

        getline(cin, answer3);
    }


    fDisp("\n\n");

    Sleep(BREAK_S);

    inventory.add("Remote - Small silver TV remote with numeric keypad.");

    disp("*Jack rummages through Mr. O'Neil's pockets but only finds a small remote.*\n\n\n");

    jack();
    fDisp("-(Not what I was expecting, but I've certainly\n");
    fDisp("  started off with less.)\n\n");
    Sleep(BREAK_VS);

    fDisp("-(Time to explore. Let's take another look around.)\n\n\n");
    Sleep(BREAK_S);

    press();
    system("CLS");

    Log log;
    log.add("LOG: Scene0 passed successfully");
    return 1;
}