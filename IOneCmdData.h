#include "HOneCmdData.h"


void Idef1(string input)
{
	string object = findFirstIn(input), person = findFirstIn(input);
	string num = findLastIn(input);

	if (compareStr(num, "-1"))
	{
		fDisp("\n\nJack:\n");

		if (compareStr(object, "security_camera")) { fDisp("-(Nice, a Recon 37X. Love a little retro.)\n\n\n"); }
		else if (compareStr(object, "body")) { fDisp("-(Temperature indicates the murder couldn't have\n  happened too long ago. If Mr. Miller had gotten\n  here slightly earlier, I might've been investigating\n  two murders.)\n\n\n"); }
		else if (compareStr(object, "television"))
		{
			fDisp("-(Now's as good a time as any to give this a shot.)\n\n\n");
			Sleep(BREAK_S);

			disp("*Jack pulls out the remote and turns on the television. A prompt for\n");
			disp("a passcode flashes on-screen.* \n\n\n");
			Sleep(BREAK_S);

			fDisp("-(Then again...)\n\n\n");
		}
		else if (compareStr(object, "bed"))
		{
			fDisp("-(I could come up with a couple of alleys I'd rather\n  sleep in than that thing. Still, it currently beats\n  the ");
			cout << red;
			fDisp("rug");
			cout << white;
			fDisp(".)\n\n\n");
		}
		else if (compareStr(object, "desk")) { fDisp("-(Y'know, for being an ex-executive, you would\n  think he'd keep a tidier desk.)\n\n\n"); }
		else if (compareStr(object, "bookcase")) { fDisp("-(At least there's one thing in here kept in pretty\n  good shape. There's some excellent classics in here.\n  I wonder what would happen if one went missing...)\n\n\n"); }
		else if (compareStr(object, "picture_frame"))
		{
			fDisp("-(A plain picture frame hanging a photo taken during\n  the Midnight Stars Ceremony last month.)\n\n");
			Sleep(BREAK_VS);
			fDisp("-(Never seen fireworks quite like those.)\n\n\n");
		}
		else if (compareStr(object, "mirror")) { fDisp("-(WARNING: Murder may be closer than it appears.)\n\n\n"); }
		else if (compareStr(object, "window"))
		{
			fDisp("-(City looks so much better from a distance. You can\n");
			fDisp("  appreciate the rainbow of tower lights from windows\n");
			fDisp("  this high.)\n\n");
			Sleep(BREAK_S);

			fDisp("-(Still raining.)\n\n\n");
		}
		else if (compareStr(object, "rug"))
		{
			fDisp("-(What did this guy do to stain the rug\n  worse than he's done now?)\n\n");
			Sleep(BREAK_S);
			fDisp("-(...hold on a minute. Maybe there's something under here.)\n\n\n");
			Sleep(BREAK_S);

			disp("*Jack carefully lifts up a corner of the rug, but nothing is underneath.*\n\n\n");

			fDisp("Jack:\n");
			sDisp("-(. . . . .)\n\n");
			Sleep(BREAK_S);
			fDisp("-(That never happened.)\n\n\n");

		}
		else if (compareStr(object, "ceiling_fan")) { fDisp("-(I swear that thing is going to fall before I leave.)\n\n\n"); }
		else if (compareStr(object, "suitcases"))
		{
			fDisp("-(Looks like O'Neil was planning a getaway. Maybe he\n  knew someone, ");
			Sleep(BREAK_VS);
			cout << red;
			disp("or maybe something, ");
			Sleep(BREAK_VS);
			cout << white;
			fDisp("was coming after him.\n\n\n");
		}
		else if (compareStr(object, "clock"))
		{
			cout << red;
			fDisp("-(3:12 AM)\n\n");
			cout << white;
			Sleep(BREAK_VS);

			fDisp("-(Why couldn't I be good at some other job?)\n\n\n");
		}
		else { fDisp("-(Can't investigate that...)\n\n\n"); }
	}
	else if (compareStr(num, "-2"))
	{
		if (compareStr(person, "Officer_Moore"))
		{
			disp("\n\n*Jack steps into the hallway.*\n\n\n");
			Sleep(BREAK_S);

			fDisp("Jack:\n");

			fDisp("-\"What's up Frank?\"\n\n\n");
			Sleep(BREAK_VS);

			fDisp("Officer Moore:\n");

			int n;
			srand(time(NULL));

			n = rand() % 5 + 1;

			switch (n)
			{
			case 1:
				fDisp("-\"Having the time of my life out here Jack.\"\n\n\n");
				break;
			case 2:
				fDisp("-\"You wouldn't be procrastinating on me?\"\n\n\n");
				break;
			case 3:
				fDisp("-\"Pondering the meaning of life. The usual.\"\n\n\n");
				break;
			case 4:
				fDisp("-\"Having a staring contest with Mr. Helpful.\"\n\n");
				Sleep(BREAK_VS);
				disp("-\"I'm winning.\"\n\n\n");
				break;
			case 5:
				fDisp("-\"Wondering if it's too late to get a bite\n");
				fDisp("  to eat.\"\n\n\n");
				break;
			default:
				fDisp("-\"Not much.\"\n\n\n");
				break;
			}
			Sleep(BREAK_S);
			disp("*Jack walks back into the center of the room.*\n\n\n");
		}
		else if (compareStr(person, "Alan_Miller"))
		{
			disp("\n\n*Jack steps into the hallway.*\n\n\n");
			Sleep(BREAK_S);

			fDisp("Jack:\n");

			fDisp("-\"And how are you doing Mr. Miller?\"\n\n\n");
			Sleep(BREAK_VS);

			fDisp("Alan Miller:\n");

			int n;
			srand(time(NULL));

			n = rand() % 5 + 1;

			switch (n)
			{
			case 1:
				fDisp("-\"Frankly, I've been better thank you.\"\n\n\n");
				break;
			case 2:
				fDisp("-\"Just, just find this guy.\"\n\n\n");
				break;
			case 3:
				fDisp("-\"I've said all I know...\"\n\n\n");
				break;
			case 4:
				fDisp("-\"Could you get that Officer to quit staring\n");
				fDisp("  at me??\"\n\n\n");
				break;
			case 5:
				fDisp("-\"I'm moving out of this place tomorrow!\"\n\n\n");
				break;
			default:
				fDisp("-\"Not much.\"\n\n\n");
				break;
			}
			Sleep(BREAK_S);
			disp("*Jack walks back into the center of the room.*\n\n\n");
		}
		else 
		{
			fDisp("\n\nJack:\n");
			fDisp("-(Can't talk to that person...)\n\n\n"); 
		}
	}
}

void Icmdreply(string input, int frame) //needed because def(input) will NOT go directly into cout statement
{
	string strOption = findLastIn(input);
	int option = stoi(strOption);

	switch (option)
	{
	case -1:
	case -2:
		switch (frame)
		{
		case 1:
			Idef1(input);
			break;
		case 2:
			//def2(input);
			break;
		case 3:
			//def3(input);
			break;
		}
	default:
		break;
	}
}

int Igetcmdline(int frame, string item)
{
	string input, data, strOption;
	int option;

	getline(cin, input);
	data = command(input, item);

	Icmdreply(data, frame);

	strOption = findLastIn(data);
	option = stoi(strOption);

	switch (option)
	{
	case 1:
		return 1;
	case 2:
		return 2;
	case 4:
		return 4;
	case 7:
		return 7;
	case -4:
		return -4;
	case -7:
		return -7;
	case 6:
		return 6;
	case 9:
		return 9;
	default:
		return 0;
	}
}