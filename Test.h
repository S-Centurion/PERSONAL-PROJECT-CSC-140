//#include <iostream>
//#include "ConsoleColor.h"
//#include <windows.h>
//#include <mmsystem.h>
//#include <vector>
//#include <string>
//#include "Inventory.h"
//#include "General.h"
#include "TestCmdData.h"

//#include "Start.h"

//#include "Test.h"
/*
#include "ActOne.h"
*/
//using namespace std;

//string idef1(string object);
//string tdef1(string person);
//string def1(string input);
//string def2(string input);

//void getICmd(string input);
//void getTCmd(string input);

void test()
{
	Inv inventory;

	//inventory.add("wattup");
	//inventory.viewAll();

	//inventory.viewAll();
	//inventory.add("wattup");

	//inventory.delItem("gee");

	//inventory.add("test 1");
	//inventory.add("test 2");
	//inventory.add("test 3");
	//inventory.add("test 4");

	//inventory.viewAll();

	//inventory.delItem("test 3");

	//inventory.viewAll();

	//inventory.useItem("chainsaw", "chainsaw");

	//string flag = command("USE the", "te");
	//cout << flag;
	//command("OPEN INVENTORY");

	//inventory.useAndDelItem("the", "the");
	//inventory.delItem("the");

	//string appleD;

	//testy = "That's right\n its a brand new way.";

	//cout << testy;

	//cout << idef1("apple");

	//string str = command("INVESTIGATE apple", "appasdf");

	/*

	cout << command("INVESTIGATE appl") << endl;

	string str = command("INVESTIGATE apple");

	cout << str;

	cout << idef1(str);
	*/

	/*
	string in, str2;

	getline(cin, in);
	str2 = idef1(command(in));
	cout << str2;
	*/
}

void testScene1()
{
	int n = 1;

	do
	{
		string input, data;
		int frame = 2;

		/*
		cout << "Use item?\n\n";
		cout << ">";

		getcmdreply(frame);
		*/

		/*
		cout << "Open Inventory?\n\n";
		cout << ">";

		//getcmdreplyline(frame);
		*/

		/*
		while (frame == 1)
		{
			cout << "You are relaxing in your car.\n\nYour phone suddenly rings.\n\n\n";
			cout << ">";

			getcmdline(frame, d);
			frame = 2;
		}
		*/

		while (frame == 2)
		{
			int choice;

			cout << "You walk into a large room.\n\nThere's a body on the floor AND a pear.\n\nInvestigate?\n\n\n";
			cout << ">";

			choice = getcmdline(frame, "Com");

			if (choice == 1)
			{
				cout << "\n\nPeter_Capaldi\n\n\n";
				
				Inv inventory;
				inventory.add("bowties - can be used to look cool");

				frame = 3;
			}
			else if (choice == 6)
			{
				frame = 2;
			}
			else
			{
				frame = 2;
			}
		}

		while (frame == 3)
		{
			int choice;

			cout << "You walk into a large room.\n\nThere's a body on the floor AND a second pear.\n\nInvestigate?\n\n\n";
			cout << ">";

			choice = getcmdline(frame, "Spectacles");

			if (choice == 1)
			{
				cout << "\n\nPeter_Capaldi\n\n\n";

				Inv inventory;
				inventory.add("neckties");

				frame = 2;
			}
			else if (choice == 6)
			{
				frame = 2;
			}
			else
			{
				frame = 3;
			}
		}

		/*
		while (frame == 3)
		{
			cout << "Time to head out.\n\nInvestigate door?\n\n\n";
			cout << ">";

			getcmdline(frame, d);
			frame = 1;
			cout << "\n\n";
		}
		*/

		n++;

	} while (n < 100);
}
	



	/*
	switch (frame)
	{
	case 1:
		def = def1(input);
		cout << def << endl;
		break;
	case 2:
		def = def2(input);
		cout << def << endl;
		break;
	}
	*/

/*
string tdef1(string person)
{

	if (compareStr(person, "officer")) { string officer = "Hello there!"; return officer; }
	else return "\n\nFAILED";

}
*/

/*
void getICmd(string input)
{
	string idef;

	idef = idef1(input);
	cout << idef << endl;
}

void getTCmd(string input)
{
	string tdef;
	
	tdef = tdef1(input);
	cout << tdef << endl;
}
*/


/*

string APPLEDEF = "ASDFASDF"

if (ASDF == asdf) return APPLEDEF



n = command("USE object", "object")

switch (n)
{

EVERY CASE FOR USING (NOT INCLUDING DIDN'T WORK)

}

*/