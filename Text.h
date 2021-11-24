//#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ctype.h>
#include "ConsoleColor.h"
#include <stdlib.h>
#include <time.h>
//#include "Inventory.h"

using namespace std;


const int BREAK_VL = 6000, BREAK_S = 2500, BREAK_VS = 1250, BREAK_L = 4000;
const string d = "DUMMY_STRING_80211202021";

void sDisp(string word)
{
	const int BREAK = 80;

	for (int n = 0; n < word.length(); n++)
	{
		Sleep(BREAK);
		cout << word.at(n);
	}

}

void fDisp(string word)
{
	const int BREAK = 25;

	for (int n = 0; n < word.length(); n++)
	{
		Sleep(BREAK);
		cout << word.at(n);
	}

}

void disp(string word)
{
	const int BREAK = 50;

	for (int n = 0; n < word.length(); n++)
	{
		Sleep(BREAK);
		cout << word.at(n);
	}

}

void jack()
{
	fDisp("Jack:\n");
	Sleep(BREAK_VS);
}

/*
void talk(string person)
{
	//compareStr("hello", "hello");
}

void goBack()
{

}

int command(string option)
{
	//may have to move this declaration
	Inv inventory;
	string invItem, item, person, object;
	int n = 3;
	int choice = 0;

	n = cmdNum(option);



	
	switch (n)
	{
	case 1:
		inventory.useItem(invItem, item);
		choice = 1;
		return choice;
	case 2:
		inventory.viewAll();
		choice = 2;
		return choice;
	case 3:
		//talk(person);
		//choice = 3;
		cout << "YAY!";
		return choice;
	case 4:
		goBack();
		choice = 4;
		return choice;
	default:
		cout << choice << " is an invalid choice.\n";
	}
	
}
*/

/*
cout << "\n\tMain Menu\n\n";
		cout << "1.\tAdd Data to File\n";
		cout << "2.\tView Data in File\n";
		cout << "3.\tExit\n";

		cin >> choice;
		getchar();//absorb carraige return

		switch (choice)
		{
		case 1:
			addData();
			break;
		case 2:
			viewData();
			break;
		case 3:
			break;
		default:
			cout << choice << " is an invalid choice.\n";
		}
	}
*/



/* void display(string sentence)
{

	
	string a = "HIGH";
	string b = " FIVE";

	sentence.push_back(a);
	sentence.push_back(b);

	for (int n = 0; n < sentence.size(); n++)
	{


	strDisplay(sentence.at(1));
	strDisplay(sentence.at(2));

}*/

//void getSen()

//void flash()





/*

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void saveData(vector<string> vData, string strFileName, bool isAppendMode)
{
	//object instance
	ofstream fileOut;

	//open the file in specified mode
	if (isAppendMode)
	{
		fileOut.open(strFileName.c_str(), ios::app);
	}
	else
	{
		fileOut.open(strFileName.c_str());
	}

	//dump vector into file
	for (int n = 0; n < vData.size(); n++)
	{
		if (vData.at(n) != "")
		{
			//output name to file
			fileOut << vData.at(n) << endl;
		}
	}

	//close file
	fileOut.close();

}//end SaveData

vector<string> getData(string strFileName)
{
	//object instance
	string strName;
	ifstream fileIn;
	vector<string> vData(1);

	//open file
	fileIn.open(strFileName.c_str());

	fileIn >> strName;

	//get data while looping through file
	while (!fileIn.eof())
	{
		vData.push_back(strName);
		fileIn >> strName;
	}

	fileIn.close();

	return vData;

}//end getData



#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "DataAccessor.h"

using namespace std;

void addNames();
//This function prompts the user for names and stores them into
//a file with the name and extension the user specifies.

void viewNames();
//This function will display the names into a file with the
//name and extension the user specifies.

void sortNames();
//This function sorts all of the names in a file alphabetically and stores
//the sorted text back into the file.


int main()
{
	//variables
	int nChoice = 0;

	//menu loop
	while (nChoice != 4)
	{
		//main menu
		cout << "\n\tMain Menu\n\n";
		cout << "1.\tAdd Names to File\n";
		cout << "2.\tView Names in File\n";
		cout << "3.\tSort Names in File\n";
		cout << "4.\tExit\n";
		cin >> nChoice;
		getchar();//absorb carraige return

		//process choice
		switch (nChoice)
		{
		case 1:
			addNames();
			break;
		case 2:
			viewNames();
			break;
		case 3:
			sortNames();
			break;
		case 4:
			break;
		default:
			cout << nChoice << " is an invalid choice.\n";

		}//end switch

	}//end while

	return 0;
}//end Main

void addNames()
{
	string strName, strFileName;
	vector<string> vNames(1);

	//prompt user for the name of the file
	cout << "Enter the file name with the extension: ";
	getline(cin, strFileName);

	//add names
	cout << "Enter a name to add to the file\n";
	getline(cin, strName);

	//storage loop
	while (strName != "Q")
	{
		vNames.push_back(strName);

		//reprompt user
		cout << "Enter another name or 'Q' to quit\n";
		getline(cin, strName);
	}

	//send vector to SaveData
	saveData(vNames, strFileName, true);

}//end addNames function

void viewNames()
{
	//vector to hold returned vector of GetData
	vector<string> vNames;
	string strFileName;

	//prompt user for file name
	cout << "Enter the file name with extension: ";
	cin >> strFileName;

	vNames = getData(strFileName);

	//dump vector into file
	for (int n = 0; n < vNames.size(); n++)
	{
		//display name
		cout << vNames.at(n) << endl;
	}

}

void sortNames()
{
	//variable / object definitions
	vector<string> vNames;
	string strFileName, strChoice;

	//prompt user for file name
	cout << "Enter the file name with extension to sort: ";
	cin >> strFileName;

	vNames = getData(strFileName);

	sort(vNames.begin(), vNames.end());

	//display sorted vector
	for (int n = 0; n < vNames.size(); n++)
	{
		cout << vNames.at(n) << endl;
	}

	//ask user if they want to overwrite the old file with the sorted names
	cout << endl << "Would you like to overwrite the file with the sorted names?\nY for yes or N for No: ";
	cin >> strChoice;

	if (strChoice == "Y" || strChoice == "y")
	{
		saveData(vNames,strFileName,false);
	}

}

*/