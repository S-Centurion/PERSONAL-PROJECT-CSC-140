#include "Text.h"

using namespace std;


class Inv
{
private:
	//variables
	const string inventory = "Inventory.txt";
	const string tempinv = "Temporary_Inventory.txt";
	vector<string> itemsAll;

	//helper functions
	void saveData2(string fileName, string item)
	{
		//object instance
		ofstream fileOut;

		//open file
		fileOut.open(fileName.c_str(), ios::app);

		//test to see if file opened properfly
		if (fileOut.fail())
		{
			cout << "ERROR_CODE_1";
			return;
		}

		fileOut << endl << item << endl;

		fileOut.close();

	}

	/*
	void saveData(string fileName, string item)
	{
		//object instance
		ofstream fileOut;

		//open file
		fileOut.open(fileName.c_str(), ios::app);

		//test to see if file opened properfly
		if (fileOut.fail())
		{
			cout << "ERROR_CODE_1";
			return;
		}

		fileOut << endl << item << endl;

		fileOut.close();

	}
	*/

	vector<string> getData(string fileName)
	{
		//object instance
		ifstream fileIn;
		string strData;
		vector<string> vData(1);

		//open file
		fileIn.open(fileName.c_str());

		//test to see if file opened properly
		if (fileIn.fail())
		{
			cout << "ERROR_CODE_2";
			return vData;//exit function on fail
		}

		for (strData = ""; getline(fileIn, strData); !fileIn.eof())
		{
			vData.push_back(strData);
		}

		//close file
		fileIn.close();

		return vData;
	}

	/*
	void cpyDelStr(string oldFile, string newFile, string item)
	{
		//object instance 1
		ofstream fileOut;

		//object instance 2
		ifstream fileIn;
		string strData;
		vector<string> vData(1);

		//open "oldFile" file
		fileIn.open(oldFile.c_str());

		//test to see if file opened properly
		if (fileIn.fail())
		{
			cout << "ERROR_CODE_2";
		}
		
		for (strData = ""; getline(fileIn, strData); !fileIn.eof())
		{

			vData.push_back(strData);
		}
			
		for (int n = 0; n < vData.size(); n++)
		{
			if (vData.at(n) == item)
			{
				vData.erase(vData.begin() + n);
			}
		}

		fileIn.close();

		//open "newFile" file
		fileOut.open(newFile.c_str(), ios::app);

		//test to see if file opened properfly
		if (fileOut.fail())
		{
			cout << "ERROR_CODE_1";
			return;
		}

		vData.erase(vData.begin());

		//dump vector into file
		for (int n = 0; n < vData.size(); n++)
		{
			if (vData.at(n) != "")
			{
				//output name to file
				fileOut << endl << vData.at(n) << endl;
			}
		}

		fileOut.close();
	}
	
	void deleteAllData(string fileName)
	{
		//object instance
		ofstream fileOut;

		//open file
		fileOut.open(fileName.c_str());

		//test to see if file opened properfly
		if (fileOut.fail())
		{
			cout << "ERROR_CODE_1";
			return;
		}

		fileOut.close();
	}
	*/
	
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


public:
	//constructors
	Inv() {}

	//mutators and accessors



	//member functions
	void add(string item)
	{
		//send string to inventory
		saveData2(inventory, item);
	}

	void viewAll()
	{
		//vector to hold returned vector of GetData
		itemsAll = getData(inventory);

		//display
		for (int n = 0; n < itemsAll.size(); n++)
		{
			//display items
			cout << itemsAll.at(n) << endl;
		}
	}

	/*
	void delItem(string item)
	{
		cpyDelStr(inventory, tempinv, item);
		deleteAllData(inventory);

		cpyDelStr(tempinv, inventory, item);
		deleteAllData(tempinv);
	}

	bool useAndDelItem(string invItem, string item)
	{
		if (compareStr(invItem, item))
		{
			delItem(invItem);
			return true;
		}
		else
		{
			fDisp("\n\n*" + invItem + " can't be used here.*\n\n\n");

			return false;
		}
	}
	*/

	bool useItem(string invItem, string item)
	{
		if (compareStr(invItem, item))
		{
			fDisp("\n\n");
			return true;
		}
		else
		{
			fDisp("\n\n*" + invItem + " can't be used here.*\n\n\n");
			return false;
		}
	}

};