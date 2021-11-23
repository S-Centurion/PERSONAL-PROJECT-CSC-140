#include "Text.h"


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

void help()
{
	const int BREAK_SL = 4000;

	system("CLS");

	cout << "**********Command List**********\n\n\n"
		<< "INVESTIGATE <object>\n\n"
		<< "TALK TO <person>\n\n"
		<< "USE <surrounding object>\n\n"
		<< "USE_ITEM <inventory object>\n\n"
		<< "USE_TOOL <inventory tool>\n\n"
		<< "OPEN_INVENTORY\n\n"
		<< "HELP\n\n"
		<< "GO_BACK\n\n\n\n\n";

	Sleep(BREAK_SL);
	press();
	system("CLS");
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
	else if (compareStr(cmd, "USE_TOOL"))
	{
		return 3;
	}
	else if (compareStr(cmd, "USE_ITEM"))
	{
		return 4;
	}
	else if (compareStr(input, "OPEN_INVENTORY"))
	{
		return 5;
	}
	else if (compareStr(input, "GO_BACK"))
	{
		return 6;
	}
	else if (compareStr(cmd, "USE"))
	{
		return 7;
	}
	else if (compareStr(input, "HELP"))
	{
		return 8;
	}
	else
	{
		return 0;
	}
}

/*
"INVESTIGATE <object>\n\n"
<< "TALK TO <person>\n\n"
<< "USE <object>\n\n"
<< "OPEN INVENTORY\n\n\n\n\n";
*/

/*
void talk(string person)
{
	//compareStr("hello", "hello");
}
*/

/*
void goBack()
{

}
*/

/*
string investigate(string object, string identifier)
{


	return object;
}
*/

string command(string option, const string data)
{
	//may have to move this declaration
	Inv inventory;
	string invItem, person, object;
	const string item = data;
	string combo;
	int n = 3;
	string choice = "0";

	n = cmdNum(option);

	switch (n)
	{
	case 1:
		object = findLastIn(option);

		cout << "INVESTIGATE!";

		choice = object + " " + "1";
		return choice;
	case 2:
		person = findLastIn(option);

		cout << "TALK!";

		choice = person + " " + "2";
		return choice;
	case 3:
		invItem = findLastIn(option);

		cout << "USE_TOOL!";

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
	case 4:
		invItem = findLastIn(option);

		cout << "USE_ITEM!";

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
	case 5:
		inventory.viewAll();

		cout << endl << "OPEN INVENTORY!" << endl;

		choice = " 5";
		return choice;
	case 6:
		cout << "GO_BACK!";

		choice = " 6";
		return choice;
	case 7:
		cout << "USE!";

		object = findLastIn(option);

		if (compareStr(object, item))
		{
			choice = " 7";
			return choice;
		}
		else
		{
			choice = " -7";
			return choice;
		}
	case 8:
		cout << "HELP!";

		help();

		choice = " 8";
		return choice;
	default:
		cout << choice << " is an invalid chommand. Try something else.\n";

		choice = " 0";
		return choice;
	}
}