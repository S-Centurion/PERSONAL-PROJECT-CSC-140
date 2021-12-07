#include "AOneCmdData.h"


int SceneA()
{
	int frame = 1;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1) //room
		{
			cout << "*A body lies towards the center of the room, near a messy desk on the right side\n"
				<< "from the entryway. Immediately behind the desk is a square window covering the\n"
				<< "entire length of the right wall. Red curtains are drawn fully open on either side.\n"
				<< "A bed and a bookcase sit alongside the far wall across from the entryway, and a\n"
				<< "television sits along the left wall. A security camera is tucked into the upper\n"
				<< "corner. When looking at the entryway, a picture is hung on the left side while a\n"
				<< "mirror is hung on the right. A broken clock hangs directly underneath the mirror\n"
				<< "over a stack of suitcases by the television. Hanging overhead is a ceiling fan with\n"
				<< "four blades, one of them cracked. A faded rug lies underneath the corpse.*\n\n\n";

			Sleep(BREAK_S);

			disp("*Jack is in the center of the room.*\n\n\n");
			
			fDisp(">");
			choice = Agetcmdline(frame, "desk");

			switch (choice)
			{
			case 1:
				frame = 2;
				break;
			default:
				break;
			}
		}
		while (frame == 2) //desk
		{
			jack();
			fDisp("-(Don't envy the person who now has to take\n");
			fDisp("  care of all this clutter.)\n\n");
			Sleep(BREAK_VS);
			fDisp("-(Three drawers, all across. Let's take a\n");
			fDisp("  look.)\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "drawers");

			switch (choice)
			{
			case 1:
				frame = 3;
				break;
			case 6:
				frame = 1;
				break;
			default:
				break;
			}
		}
		while (frame == 3) //#1
		{
			disp("*Jack moves closer to ");
			cout << green;
			disp("drawer_one");
			cout << white;
			disp(".*\n\n\n");
			
			fDisp(">");
			choice = Agetcmdline(frame, "drawer_one");

			switch (choice)
			{
			case 9:
				frame = 5;
				break;
			case 1:
				frame = 4;
				break;
			case 6:
				frame = 2;
				break;
			default:
				break;
			}
		}
		while (frame == 4) //#1.1 tools
		{
			disp("*This drawer appears to be filled with office supplies including staples and\n");
			disp("a couple letter openers.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, d);

			switch (choice)
			{
			case 9:
				frame = 5;
				break;
			case 6:
				frame = 3;
				break;
			default:
				break;
			}
		}
		while (frame == 5) //#2 
		{
			disp("*Jack moves closer to drawer two.*\n\n\n");
			
			fDisp(">");
			choice = Agetcmdline(frame, "drawer_two");

			switch (choice)
			{
			case 9:
				frame = 7;
				break;
			case 1:
				frame = 6;
				break;
			case 6:
				frame = 3;
				break;
			default:
				break;
			}
		}
		while (frame == 6) //#2.1 pictures
		{
			disp("*This drawer appears to be filled with personal photos.*\n\n\n");
			
			fDisp(">");
			choice = Agetcmdline(frame, "Spectacles");

			switch (choice)
			{
			case 9:
				frame = 7;
				break;
			case 4:
				jack();
				fDisp("-(Using the ultraviolet light setting on\n");
				fDisp("  the Spectacles shows a passcode.)\n\n");
				Sleep(BREAK_VS);
				fDisp("-(I wonder...)\n\n\n");
				frame = 8;
				break;
			case 7:
				fDisp("*Invalid command for this <object>/<item>.*\n\n\n");
				break;
			case 6:
				frame = 5;
				break;
			default:
				break;
			}
		}
		while (frame == 7) //#3 locked
		{
			disp("*This drawer is locked.*\n\n\n");
			
			fDisp(">");
			choice = Agetcmdline(frame, d);

			switch (choice)
			{
			case 9:
				frame = 3;
				break;
			case 6:
				frame = 6;
				break;
			default:
				break;
			}
		}
		if (frame == 8)
		{
			n++;
		}
	} while (n != 1);

	Log log;
	log.add("LOG: SceneA passed successfully");
	return 1;
}

int SceneB()
{
	jack();
	fDisp("-(Alright remote, don't fail me now.)\n\n\n");
	Sleep(BREAK_S);

	disp("*Jack turns on the television with the remote and a passcode appears on the screen. He\n");
	disp("enters the code from the photo. As soon as the code is inputted, the television displays\n");
	disp("a long menu. Jack begins scrolling through the list of pre-formatted channels.*\n\n\n");
	Sleep(BREAK_S);

	jack();
	fDisp("-(Alright, as interesting as uh, ");
	Sleep(BREAK_VS);
	cout << red;
	disp("Pro Chicken Wrestling (?)\n");
	cout << white;
	Sleep(BREAK_VS);
	fDisp("  might be, I'm really looking for...)\n\n");
	Sleep(BREAK_VS);
	fDisp("-(There's the security feed.)\n\n");
	Sleep(BREAK_VS);
	fDisp("-(Alright security camera, what do you have to tell me?)\n\n");
	Sleep(BREAK_S);
	sDisp("-(.  .  .)\n\n");
	Sleep(BREAK_S);
	fDisp("-(Well ");
	cout << red;
	fDisp("Mr. Miller,");
	cout << white;
	Sleep(BREAK_VS);
	fDisp(" I'll be curious to see how you explain this.)\n\n\n");
	Sleep(BREAK_S);


	int frame = 1;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1)
		{
			disp("*Jack is in the center of the room.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "Alan_Miller");

			switch (choice)
			{
			case 2:
				
				disp("*Jack walks out into the hallway and positions himself near Mr. Miller.*\n\n\n");
				Sleep(BREAK_VS);

				jack();
				fDisp("-\"Say Mr. Miller, what do you figure the odds are for\n");
				fDisp("  there to be a working Recon 37X Security Camera in\n");
				fDisp("  that single-room apartment behind us?\"\n\n");
				Sleep(BREAK_S);

				fDisp("-\"Because I'll tell you, I know from experience they\n");
				fDisp("  are few and far between these days. I would have to\n");
				fDisp("  be awfully, awfully lucky to have both you and him\n");
				fDisp("  facing each other on camera.\"\n\n");
				Sleep(BREAK_S);

				fDisp("-\"Well, as it turns out, today was an awfully lucky\n");
				fDisp("  day for me. Not so much for you, Mr. Miller.\"\n\n");
				Sleep(BREAK_VS);

				fDisp("-\"So you're going to need to fill in the audio that\n");
				fDisp("  Recon 37X can't pick up.\"\n\n");
				Sleep(BREAK_S);

				cout << red;
				fDisp("-\"Right");
				Sleep(BREAK_VS);
				fDisp(" Now.\"\n\n\n");
				cout << white;
				Sleep(BREAK_L);
				Sleep(BREAK_VS);

				frame = 2;
				break;
			default:
				break;
			}
		}
		while (frame == 2)
		{
			jack();
			fDisp("-(This guy might need a little encouragement.)\n\n");
			fDisp("-(I'd never harm a witness, but he doesn't know that.)\n\n");
			fDisp("-(Maybe I should just ");
			Sleep(BREAK_VS);
			fDisp("show him what I work with.)\n\n\n");
			fDisp(">");

			while (Agetcmdline(frame, "Pistol") != 4)
			{
				jack();
				fDisp("-(Think I'll have to use something a little dangerous...)\n\n\n");

				fDisp(">");
			}

			Sleep(BREAK_S);

			disp("*Jack slowly reveals his pistol in his coat holster.*\n\n\n");
			Sleep(BREAK_VS);
			
			fDisp("Alan Miller:\n");
			fDisp("-\"ALRIGHT. Alright, alright. I've already had to deal\n");
			fDisp("  with one murderous psychopath tonight whose bad side\n");
			fDisp("  I was TRYING to avoid.\"\n\n");
			Sleep(BREAK_S);

			fDisp("-\"Now, I can honestly and genuinely say there was nothing\n");
			fDisp("  important said. However, it seems that I, may have,\n");
			fDisp("  interrupted more than his fire.\"\n\n");
			Sleep(BREAK_S);

			fDisp("-\"He appeared to be messing around with something by the desk\n");
			fDisp("  But for all I know you already saw this on the magic camera...\"\n\n\n");
			Sleep(BREAK_S);

			jack();
			fDisp("-\"No no Mr. Miller, you helped me plenty.\"\n\n");
			Sleep(BREAK_VS);

			fDisp("-\"But if it's all the same to you, why don't you run by\n");
			fDisp("  the precinct when we're all done here and you can give his\n");
			fDisp("  description out to the sketch artists down there.\"\n\n\n");
			Sleep(BREAK_S);

			fDisp("Alan Miller:\n");
			fDisp("-\"...might as well at this point.\"\n\n\n");
			Sleep(BREAK_S);

			fDisp("Officer Moore:\n");
			fDisp("-\"I'll take you there when we're wrapped up here, Helpful.\"\n\n");
			Sleep(BREAK_VS);

			fDisp("-\"Don't worry, I promise I'm a lot more boring than the cowboy\n");
			fDisp("  here.\"\n\n\n");
			Sleep(BREAK_S);

			disp("*Jack Fairchild turns back towards the center of the room.*\n\n\n");
			Sleep(BREAK_S);

			jack();
			fDisp("-(Good thing the cordial Mr. Miller didn't call my ");
			cout << red;
			fDisp("bluff");
			cout << white;
			fDisp(".)\n\n");
			Sleep(BREAK_S);

			fDisp("-(I wasn't lying to him, those Recon 37Xs really are\n");
			fDisp("  garbage.)\n\n\n");
			Sleep(BREAK_L);

			frame = 3;
			break;
		}
		if (frame == 3)
		{
			n++;
		}
	} while (n != 1);

	Log log;
	log.add("LOG: SceneB passed successfully");
	return 1;
}

int SceneC()
{	
	int frame = 1;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1) //room
		{
			cout << "*A body lies towards the center of the room, near a messy desk on the right side\n"
				<< "from the entryway. Immediately behind the desk is a square window covering the\n"
				<< "entire length of the right wall. Red curtains are drawn fully open on either side.\n"
				<< "A bed and a bookcase sit alongside the far wall across from the entryway, and a\n"
				<< "television sits along the left wall. A security camera is tucked into the upper\n"
				<< "corner. When looking at the entryway, a picture is hung on the left side while a\n"
				<< "mirror is hung on the right. A broken clock hangs directly underneath the mirror\n"
				<< "over a stack of suitcases by the television. Hanging overhead is a ceiling fan with\n"
				<< "four blades, one of them cracked. A faded rug lies underneath the corpse.*\n\n\n";

			Sleep(BREAK_S);

			disp("*Jack is in the center of the room.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "desk");

			switch (choice)
			{
			case 1:
				frame = 2;
				break;
			default:
				break;
			}
		}
		while (frame == 2) //desk
		{
			jack();
			fDisp("-(What would that guy be wanting to do here?)\n\n");
			Sleep(BREAK_VS);

			fDisp("-(Still three drawers, all across. Let's take a\n");
			fDisp("  look.)\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "drawers");

			switch (choice)
			{
			case 1:
				frame = 3;
				break;
			case 6:
				frame = 1;
				break;
			default:
				break;
			}
		}
		while (frame == 3) //#1
		{
			disp("*Jack moves closer to drawer one.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "drawer_one");

			switch (choice)
			{
			case 9:
				frame = 5;
				break;
			case 1:
				frame = 4;
				break;
			case 6:
				frame = 2;
				break;
			default:
				break;
			}
		}
		while (frame == 4) //#1.1 tools
		{
			Inv inventory;

			disp("*This drawer appears to be filled with office supplies including staples and\n");
			disp("a couple letter openers.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "Scanner");

			switch (choice)
			{
			case 9:
				frame = 5;
				break;
			case 4:
				jack();
				fDisp("-(These letter openers appear perfectly clean, but\n");
				fDisp("  I'm willing to bet they're not.)\n\n");
				Sleep(BREAK_S);

				fDisp("-(Bingo.)\n\n");
				Sleep(BREAK_VS);

				fDisp("-(He tried to bury as much evidence as time allowed,\n");
				fDisp("  but the Scanner can pick up anything.)\n\n");
				Sleep(BREAK_S);

				fDisp("-(Although....)\n\n");
				Sleep(BREAK_VS);
				fDisp("-(One could ask why he didn't just take this one with him.)\n\n");
				Sleep(BREAK_VS);

				fDisp("-(Hmmmmm...");
				Sleep(BREAK_VS);
				fDisp(" ...well I guess ");
				cout << red;
				fDisp("Replicants");
				cout << white;
				fDisp(" mess up like the rest of us.)\n\n");
				Sleep(BREAK_S);
				fDisp("-(That I know.)\n\n");
				Sleep(BREAK_S);

				inventory.add("Letter_Opener - Curved, ornate blade. Recently used to murder Mr. Henry O'Neil.");

				fDisp("-(And I'm taking it with me.)\n\n\n");
				Sleep(BREAK_S);

				frame = 8;
				break;
			case 7:
				fDisp("*Invalid command for this <object>/<item>.*\n\n\n");
				break;
			case 6:
				frame = 3;
				break;
			default:
				break;
			}
		}
		while (frame == 5) //#2 
		{
			disp("*Jack moves closer to drawer two.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "drawer_two");

			switch (choice)
			{
			case 9:
				frame = 7;
				break;
			case 1:
				frame = 6;
				break;
			case 6:
				frame = 3;
				break;
			default:
				break;
			}
		}
		while (frame == 6) //#2.1 pictures
		{
			disp("*This drawer appears to be filled with personal photos.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, d);

			switch (choice)
			{
			case 9:
				frame = 7;
				break;
			case 6:
				frame = 5;
				break;
			default:
				break;
			}
		}
		while (frame == 7) //#3 locked
		{
			disp("*This drawer is locked.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, d);

			switch (choice)
			{
			case 9:
				frame = 3;
				break;
			case 6:
				frame = 6;
				break;
			default:
				break;
			}
		}
		if (frame == 8)
		{
			n++;
		}
	} while (n != 1);

	Log log;
	log.add("LOG: SceneC passed successfully");
	return 1;
}

int SceneD()
{
	int frame = 1;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1) //room
		{
			cout << "*A body lies towards the center of the room, near a messy desk on the right side\n"
				<< "from the entryway. Immediately behind the desk is a square window covering the\n"
				<< "entire length of the right wall. Red curtains are drawn fully open on either side.\n"
				<< "A bed and a bookcase sit alongside the far wall across from the entryway, and a\n"
				<< "television sits along the left wall. A security camera is tucked into the upper\n"
				<< "corner. When looking at the entryway, a picture is hung on the left side while a\n"
				<< "mirror is hung on the right. A broken clock hangs directly underneath the mirror\n"
				<< "over a stack of suitcases by the television. Hanging overhead is a ceiling fan with\n"
				<< "four blades, one of them cracked. A faded rug lies underneath the corpse.*\n\n\n";

			Sleep(BREAK_S);

			disp("*Jack is in the center of the room.*\n\n\n");
			Sleep(BREAK_S);

			jack();
			fDisp("-(I kind of like this thing. Looks handy.)\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "picture");
			
			switch (choice)
			{
			case 1:
				frame = 2;
				break;
			default:
				break;
			}
		}
		while (frame == 2) //open picture_frame
		{
			
			jack();
			fDisp("-(Now that's a photo worth looking at up close.)\n\n");
			Sleep(BREAK_L);
			fDisp("-(Beautiful. Can't help but miss going to the\n");
			fDisp("  Midnight Stars Ceremony. Such creative uses\n");
			fDisp("  of light.)\n\n");
			Sleep(BREAK_S);
			fDisp("-(Not a terribly fitting frame though.)\n\n\n");
			Sleep(BREAK_S);

			disp("*Jack stands rather close to the picture.*\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "Letter_Opener");

			switch (choice)
			{
			case 4:
				frame = 3;
				break;
			case 7:
				fDisp("*Invalid command for this <object>/<item>.*\n\n\n");
				break;
			case 6:
				frame = 1;
				break;
			default:
				break;
			}
		}
		if (frame == 3)
		{
			Inv inventory;
			jack();
			fDisp("-(In fact, I'd even say that frame shouldn't\n");
			fDisp("  belong there.)\n\n\n");
			Sleep(BREAK_S);

			disp("*Jack pries open the frame with the letter opener.*\n\n\n");

			Sleep(BREAK_S);

			jack();
			fDisp("-(Not a bad spot to be hiding something. And in\n");
			fDisp("  our case, ");
			Sleep(BREAK_VS);

			inventory.add("Button - Technically a lightning-fast digital wireless transceiver.");

			fDisp("a Button.)\n\n");
			Sleep(BREAK_S);

			fDisp("-(Just a wireless Button.)\n\n");
			Sleep(BREAK_S);

			fDisp("-(Ok, I'll bite.)\n\n\n");
			fDisp(">");

			while (Agetcmdline(frame, "Button") != 4)
			{
				jack();
				fDisp("-(Have to press this Button...)\n\n\n");

				fDisp(">");
			}

			Sleep(BREAK_L);
			Sleep(BREAK_VS);

			jack();
			sDisp("-(.     .     .     .     .)\n\n");
			Sleep(BREAK_S);

			fDisp("-(Guess that one's a time release.)\n\n\n");
			Sleep(BREAK_S);

			n++;
		}
	} while (n != 1);

	Log log;
	log.add("LOG: SceneD passed successfully");
	return 1;
}

int SceneE()
{
	int frame = 1;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1) //room
		{
			cout << "*A body lies towards the center of the room, near a messy desk on the right side\n"
				<< "from the entryway. Immediately behind the desk is a square window covering the\n"
				<< "entire length of the right wall. Red curtains are drawn fully open on either side.\n"
				<< "A bed and a bookcase sit alongside the far wall across from the entryway, and a\n"
				<< "television sits along the left wall. A security camera is tucked into the upper\n"
				<< "corner. When looking at the entryway, a picture is hung on the left side while a\n"
				<< "mirror is hung on the right. A broken clock hangs directly underneath the mirror\n"
				<< "over a stack of suitcases by the television. Hanging overhead is a ceiling fan with\n"
				<< "four blades, one of them cracked. A faded rug lies underneath the corpse.*\n\n\n";

			Sleep(BREAK_S);

			disp("*Jack is in the center of the room.*\n\n\n");
			Sleep(BREAK_S);

			disp("*As Jack begins to look around the room, a soft, mechanical \"click\" sounds out\n");
			disp("from the far wall.*\n\n\n");

			jack();
			fDisp("-(So that's what it does.)\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "bookshelf");
			
			switch (choice)
			{
			case 1:
				frame = 2;
				break;
			default:
				break;
			}
		}
		while (frame == 2) //bookshelf
		{
			jack();
			fDisp("-(Sounded like it came from inside the bookshelf. But\n");
			fDisp("  behind which book? Should look at the bookshelf\n");
			fDisp("  closer to find out. Might be worth a few goes.)\n\n\n");

			fDisp(">");
			choice = Agetcmdline(frame, "bookshelf");

			switch (choice)
			{
			case 1:
				frame = 3;
				break;
			case 6:
				frame = 1;
				break;
			default:
				break;
			}
		}

		if (frame == 3)
		{
			int n;
			srand(time(NULL));

			n = rand() % 5 + 1;

			switch (n)
			{
			case 1:
				frame = 4;
				break;
			case 2:
				frame = 5;
				break;
			case 3:
				frame = 6;
				break;
			case 4:
				frame = 7;
				break;
			case 5:
				frame = 8;
				break;
			default:
				break;
			}
		}
		
		while (frame == 4)
		{
			jack();
			fDisp("-(\"Moby Dick\")\n\n");
			Sleep(BREAK_S);
			fDisp("-(Glad ");
			cout << red;
			fDisp("I");
			cout << white;
			fDisp(" don't have to think about a boatful of people.)\n\n");
			Sleep(BREAK_S);
			fDisp("-(Perk of my job.)\n\n");
			Sleep(BREAK_S);

			fDisp("-(No hidden compartment here.)\n\n\n");
			Sleep(BREAK_L);

			frame = 2;
			break;
		}

		while (frame == 5)
		{
			jack();
			fDisp("-(A Technical Manual...");
			Sleep(BREAK_S);
			fDisp("...\"How to Care for Your Replicant\")\n\n");
			Sleep(BREAK_S);
			fDisp("-(Feels like this one may be out of date.)\n\n");
			Sleep(BREAK_S);

			fDisp("-(Nothing hidden here.)\n\n\n");
			Sleep(BREAK_L);

			frame = 2;
			break;
		}

		while (frame == 6)
		{
			jack();
			fDisp("-(\"Bloodshed at Orion.\" A modern history book.)\n\n");
			Sleep(BREAK_S);
			fDisp("-(Too recent for me to start reading anything like\n");
			fDisp("  that.)\n\n");
			Sleep(BREAK_S);

			fDisp("-(Nothing out of the usual.)\n\n\n");
			Sleep(BREAK_L);

			frame = 2;
			break;
		}

		while (frame == 7)
		{
			jack();
			fDisp("-(\"1984\")\n\n");
			Sleep(BREAK_S);
			fDisp("-(Whatever happened to science ");
			cout << red;
			fDisp("fiction");
			cout << white;
			fDisp("?)\n\n");
			Sleep(BREAK_S);

			fDisp("-(Nothing out of the ordinary.)\n\n\n");
			frame = 2;
			break;
		}

		while (frame == 8)
		{
			Inv inventory;
			jack();
			fDisp("-(\"To Kill a Mockingbird\")\n\n");
			Sleep(BREAK_S);
			fDisp("-(A message easier to forget than I would like to admit.)\n\n");
			Sleep(BREAK_S);

			fDisp("-(Hold on a minute now.....that's not normal.)\n\n");
			Sleep(BREAK_S);
			
			disp("*A small door in the bookshelf has opened behind this novel to reveal a\n"); 
			disp("a tiny piece of parchment.*\n\n");
			Sleep(BREAK_S);

			disp("*On the parchment are the words \"Oblitus Filius.\"*\n\n\n");
			inventory.add("Small_Parchment - \"Oblitus Filius.\" is enscripted in a deep red.");
			Sleep(BREAK_S);

			frame = 9;
		}
		if (frame == 9)
		{
			n++;
		}
	} while (n != 1);

	Log log;
	log.add("LOG: SceneE passed successfully");
	return 1;
}

int SceneF()
{
	jack();
	fDisp("-(\"Oblitus Filius?\")\n\n");
	Sleep(BREAK_VS);
	fDisp("-(\"Lot of effort to hide two words.\n");
	Sleep(BREAK_VS);
	fDisp("  Unless ");
	Sleep(BREAK_S);
	fDisp("they were meant to be found.)\n\n");
	Sleep(BREAK_S);
	fDisp("-(But then what does the message say\n");
	fDisp("  and why does the firebug want to be found?)\n\n");
	Sleep(BREAK_S);
	fDisp("-(A little background would be nice, and I\n");
	fDisp("  think I have an idea where I should go\n");
	fDisp("  next.)\n\n");
	Sleep(BREAK_S);
	fDisp("-(Whatever your plans are,");
	Sleep(BREAK_S);
	fDisp(" whomever it is\n");
	fDisp("  that I'm chasing");
	Sleep(BREAK_VS);
	sDisp("....\n\n");
	Sleep(BREAK_VS);
	cout << red;
	fDisp("Watch your back\n\n\n");
	cout << white;
	Sleep(BREAK_L);

	press();
	system("CLS");
	return 1;
}

int end()
{
	cout << red;
	Sleep(BREAK_L);
	Sleep(BREAK_L);
	sDisp(">>>>END<<<<");
	cout << white;

	fDisp("\n\n\n\n\n\n");

	string str;
	fDisp("Press any key and enter to end game....\n>");
	getline(cin, str);

	Log log;
	log.add("LOG: SceneF passed successfully");
	return 1;
}
