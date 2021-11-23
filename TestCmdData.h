#include "General.h"

string def1(string input)
{
	string object = findFirstIn(input), person = findFirstIn(input);
	string num = findLastIn(input);

	cout << endl << input << endl << num << endl;

	if (compareStr(num, "1"))
	{
		//if (compareStr(object, "body")) { string body = "yeah thats a body LOL"; return body; }
		//else if (compareStr(object, "pear")) { string pear = "This is NOT an apple."; return pear; }
		return "\n\nNothing to investigate...";
	}
	else if (compareStr(num, "2"))
	{
		if (compareStr(person, "officer_davis")) { string officer = "Hello there!"; return officer; }
		else return "\n\nCan't talk to anyone right now...";
	}
}

string def2(string input)
{
	string object = findFirstIn(input), person = findFirstIn(input);
	string num = findLastIn(input);

	//cout << endl << input << endl << num << endl;

	if (compareStr(num, "1"))
	{
		//if (compareStr(object, "door")) { string door = "yeah thats a door"; return door; }
		if (compareStr(object, "body")) { string body = "yeah thats a body"; return body; }
		else if (compareStr(object, "pear")) { string pear = "This is NOT an apple."; return pear; }
		else return "\n\nNothing to investigate...";
	}
	else if (compareStr(num, "2"))
	{
		if (compareStr(person, "officer")) { string officer = "Hello there!"; return officer; }
		else return "\n\nCan't talk to anyone right now...";
	}
}

string def3(string input)
{
	string object = findFirstIn(input), person = findFirstIn(input);
	string num = findLastIn(input);

	//cout << endl << input << endl << num << endl;

	if (compareStr(num, "1"))
	{
		if (compareStr(object, "door")) { string door = "yeah thats a door"; return door; }
		//else if (compareStr(object, "pear")) { string pear = "This is NOT an apple."; return pear; }
		else return "\n\nNothing to investigate...";
	}
	else if (compareStr(num, "2"))
	{
		//if (compareStr(person, "officer")) { string officer = "Hello there!"; return officer; }
		return "\n\nCan't talk to anyone right now...";
	}
}

void cmdreply(string input, int frame) //needed because def(input) will NOT go directly into cout statement
{
	string strOption = findLastIn(input);
	cout << input;
	int option = stoi(strOption);
	string def;

	switch (option)
	{
	case 1:
	case 2:
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
		case 3:
			def = def3(input);
			cout << def << endl;
			break;
		}
		//delete other cases
		/*
	case 3:
	case -3:
		break;
	case 4:
	case -4:
		break;
	case 5:
		break;
	case 6:
		break;
		*/
	default:
		break;
	}
}

int getcmdline(int frame, string item)
{
	string input, data, strOption;
	int option;

	getline(cin, input);
	data = command(input, item);

	cmdreply(data, frame);

	strOption = findLastIn(data);
	option = stoi(strOption);

	switch (option)
	{
	case 3:
	case 4:
	case 7:
		return 1;
	case -3:
	case -4:
	case -7:
		return 0;
	case 6:
		cout << endl << "IT RETURNED 6";
		return 6;
	default:
		return 0;
	}
	
	/*
	if (option == 3 || option == 4)
	{
		return 1;
	}
	else if (option == -3 || option == -4)
	{
		return 0;
	}
	else if (option == 6)
	{
		cout << endl << "IT RETURNED 6";
		return 6;
	}
	else
	{
		return 0;
	}
	*/
}

/*
void getcmdreply(int frame)
{
	string input, data;

	getline(cin, input);
	data = command(input, "DUMMY_STRING_80211202021");

	cmdreply(data, frame);
}
*/
