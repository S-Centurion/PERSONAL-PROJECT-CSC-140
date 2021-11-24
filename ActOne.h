#include "IOneCmdData.h"



/*

*/
void SceneA()
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

	int frame = 1;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1) //room
		{
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
				n++; 
				frame = 6;
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
	} while (n != 1);
}

void SceneB()
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
	fDisp("-(There's the security feed.)\n\n\n");

	


	int frame = 1;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1)
		{
			choice = Bgetcmdline(frame, "Alan_Miller");

			switch (choice)
			{
			case 2:

				//big fight
				n++;
				break;
			default:
				break;
			}
		}


	} while (n != 1);
}

void SceneC()
{
	int frame = 1;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1) //room
		{
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
				n++;
				frame = 6;
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
	} while (n != 1);
}

void SceneD()
{
	int frame = 0;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1) //room
		{
			choice = Dgetcmdline(frame, "letter_opener");
			//open picture_frame
			switch (choice)
			{
			case 4:
				n++;
				break;
			default:
				break;
			}
		}
	} while (n != 1);
}

void SceneE()
{
	int frame = 0;
	int n = 0;
	int choice;

	do
	{
		while (frame == 1) //room
		{
			choice = Egetcmdline(frame, "bookshelf");
			//noise heard near BOOKSHELF
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
			choice = Egetcmdline(frame, "bookshelf");

			int n;
			srand(time(NULL));

			n = rand() % 5 + 1;

			switch (n)
			{
			case 1:
				frame = 3;
			case 2:
				frame = 4;
			case 3:
				frame = 5;
			case 4:
				frame = 6;
			case 5:
				frame = 7;
			default:
				break;
			}

			switch (choice)
			{
			case 1:
				frame = 2;
				break;
			case 6:
				frame = 1;
			default:
				break;
			}
		}

	} while (n != 1);
}

void SceneF()
{
	int frame = 0;
	int n = 0;
	int choice;

	do
	{

	} while (n != 1);
}

void SceneG()
{
	int frame = 0;
	int n = 0;
	int choice;

	do
	{

	} while (n != 1);
}

void SceneH()
{
	int frame = 0;
	int n = 0;
	int choice;

	do
	{

	} while (n != 1);
}

void SceneI()
{
	int frame = 0;
	int n = 0;
	int choice;

	do
	{

	} while (n != 1);
}

/*
void testScene1()
{
	int n = 1;

	do
	{
		string input, data;
		int frame = 1;


		while (frame == 1)
		{
			cout << "You are relaxing in your car.\n\nYour phone suddenly rings.\n\n\n";
			cout << ">";

			getcmdline(frame, d);
			frame = 2;
		}

		while (frame == 2)
		{
			int choice;

			cout << "You walk into a large room.\n\nThere's a body on the floor AND a pear.\n\nInvestigate?\n\n\n";
			cout << ">";

			choice = getcmdline(frame, "Com");

			if (choice == 1)
			{
				cout << "\n\nPeter_Capaldi\n\n\n";

				//Inv inventory;
				//inventory.add("bowties - can be used to look cool");

				frame = 3;
			}
			else if (choice == 6)
			{
				frame = 1;
			}
			else if (choice == 7)
			{
				fDisp("\n\n*Invalid command for this <object>/<item>.*\n\n\n");
				frame = 2;
			}
			else
			{
				frame = 2;
			}
		}

		while (frame == 3)
		{
			cout << "Time to head out.\n\nInvestigate door?\n\n\n";
			cout << ">";

			int choice;
			choice = getcmdline(frame, "Security");

			if (choice == 4)
			{
				cout << "\n\nPeter_Capaldi\n\n\n";

				Inv inventory;
				inventory.add("bowties - can be used to look cool");

				frame = 2;
			}
			else if (choice == 1)
			{
				frame = 1;
			}
			else if (choice == 7)
			{
				fDisp("\n\n*Invalid command for this <object>/<item>.*\n\n\n");
				frame = 3;
			}
			else
			{
				frame = 3;
			}

			switch (choice)
			{




		}

		n++;

	} while (n < 100);
}
*/

/*

INTRO.

GIVE TEXT TO SETUP.

MAKE PHONE RING GIVING OPPORTUNITY TO USE "TALK TO <person>" COMMAND.

CONVERSATION.

TRANSITION TO MURDER SCENE.

OFFICER INFORMS OF SITUATION AND GIVES OPPORTUNITY TO USE "INVESTIGATE <object>" COMMAND.

BLADE RUNNER LOOKS OVER BODY GIVING OPPORTUNITY TO USE "USE <object>" COMMAND FOR MAGNIFYING LENS.


*/
