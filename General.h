#include "Inventory.h"


void press()
{
	string str;
	fDisp("Press any key and enter to continue....\n>");
	getline(cin, str);
}

bool compareStr(string str1, string str2)
{
	if (str1.compare(str2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int help()
{
	system("CLS");

	cout << "\t**********Command List**********\n\n\n"
		<< "INVESTIGATE <object>\n\n"
		<< "TALK_TO <person>\n\n"
		<< "USE_ITEM <inventory object>\n\n"
		<< "OPEN_INVENTORY\n\n"
		<< "HELP\n\n"
		<< "GO_FORWARD\n\n"
		<< "GO_BACK\n\n\n\n\n\n";

	Sleep(BREAK_VS);
	press();
	system("CLS");
	return 1;
}

string findFirstIn(string input)
{
	string output;
	
	output = input.substr(0, input.find(" "));

	return output;
}

string findLastIn(string input)
{
	string output;

	int i = input.length() - 1; // last character
	while (i != 0 && !isspace(input[i]))
	{
		--i;
	}
	output = input.substr(i + 1);

	return output;
}

int cmdNum(string input)
{
	int choice;
	string cmd = findFirstIn(input);

	if (compareStr(cmd, "INVESTIGATE"))
	{
		return 1;
	}
	else if(compareStr(cmd, "TALK_TO"))
	{
		return 2;
	}
	/*
	//This version of "USE_ITEM" deletes the item after use. Works only MOST of the time 
	//Refer to commented out code in Inventory.h as well as the commented lines 122 & 126 in TestCmdData.h 

	else if (compareStr(cmd, "USE_ITEM"))
	{
		return 3;
	}
	*/
	else if (compareStr(cmd, "USE_ITEM"))
	{
		return 4;
	}
	else if (compareStr(input, "OPEN_INVENTORY"))
	{
		return 5;
	}
	/*
	Inventory MUST be reset after each game
	*/
	else if (compareStr(input, "GO_BACK"))
	{
		return 6;
	}
	else if (compareStr(cmd, "USE"))
	{
		return 7;
	}
	/*
	Although not used in demo, "USE" command left uncommented and integrated for use in later game
	*/
	else if (compareStr(input, "HELP"))
	{
		return 8;
	}
	else if (compareStr(input, "GO_FORWARD"))
	{
		return 9;
	}
	else
	{
		return 0;
	}
}

string command(string option, const string data)
{
	//may have to move this declaration
	Inv inventory;
	string invItem, person, object;
	const string item = data, iObject = data, tPerson = data;
	string combo;
	int n;
	string choice = "0";

	n = cmdNum(option);

	switch (n)
	{
	case 1:
		object = findLastIn(option);

		//cout << "INVESTIGATE!";

		if (compareStr(object, iObject))
		{
			fDisp("\n\n");
			choice = " 1";
			return choice;
		}
		else
		{
			choice = object + " " + "-1";
			return choice;
		}

		
	case 2:
		person = findLastIn(option);

		//cout << "TALK!";

		if (compareStr(person, tPerson))
		{
			fDisp("\n\n");
			choice = " 2";
			return choice;
		}
		else
		{
			choice = person + " " + "-2";
			return choice;
		}
	/*
	case 3:
		invItem = findLastIn(option);

		//cout << "USE_ITEM!";

		if ((invItem.empty() == false) && (invItem != "SE_ITEM"))
		{
			if (inventory.useAndDelItem(invItem, item))
			{
				choice = choice + " " + "3";
				return choice;
			}
			else
			{
				choice = choice + " " + "-3";
				return choice;
			}
		}
		else
		{
			fDisp("\n\n*This is an invalid command. Try something else.*\n\n\n");
			choice = choice + " " + "-3";
			return choice;
		}
	*/
	case 4:
		invItem = findLastIn(option);

		//cout << "USE_ITEM!";

		if ((invItem.empty() == false) && (invItem != "SE_ITEM"))
		{
			if (inventory.useItem(invItem, item))
			{
				choice = choice + " " + "4";
				return choice;
			}
			else
			{
				choice = choice + " " + "-4";
				return choice;
			}
		}
		else
		{
			fDisp("\n\n*Must include <item> with \"USE_ITEM\" command.*\n\n\n");
			choice = choice + " " + "-4";
			return choice;
		}
	case 5:
		system("CLS");
		cout << "\t**********Inventory**********\n\n";
		inventory.viewAll();

		cout << "\n\n\n\n\n";
		Sleep(BREAK_VS);
		press();
		system("CLS");

		//cout << endl << "OPEN INVENTORY!" << endl;

		choice = " 5";
		return choice;
	case 6:
		//cout << "GO_BACK!";
		fDisp("\n\n");

		choice = " 6";
		return choice;
	case 7:
		//cout << "USE!";

		object = findLastIn(option);

		if ((object.empty() == false) && (object != "SE"))
		{
			if (inventory.useItem(object, item))
			{
				choice = " 7";
				return choice;
			}
			else
			{
				choice = " -7";
				return choice;
			}
		}
		else
		{
			fDisp("\n\n*Must include <object> with \"USE\" command.*\n\n\n");
			choice = " -7";
			return choice;
		}
	case 8:
		//cout << "HELP!";

		help();

		choice = " 8";
		return choice;
	case 9:
		//cout << "GO_FORWARD!";
		fDisp("\n\n");

		choice = " 9";
		return choice;
	default:
		fDisp("\n\n*This is an invalid command. Try something else.*\n\n\n");

		choice = " 0";
		return choice;
	}
}

