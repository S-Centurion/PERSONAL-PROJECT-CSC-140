#include "Text.h"


class Log
{
private:
	//variables
	const string log = "Log.txt";
	vector<string> dataAll;

	//helper functions
	void saveData2(string fileName, string data)
	{
		//object instance
		ofstream fileOut;

		//open file
		fileOut.open(fileName.c_str(), ios::app);

		//test to see if file opened properfly
		if (fileOut.fail())
		{
			cout << "LOG_ERROR_CODE_1";
			return;
		}

		fileOut << data << endl;

		fileOut.close();

	}

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
			cout << "LOG_ERROR_CODE_2";
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


public:
	//constructors
	Log() {}

	//mutators and accessors


	//member functions
	void add(string data)
	{
		//send string to inventory
		saveData2(log, data);
	}

	void viewAll()
	{
		//vector to hold returned vector of GetData
		dataAll = getData(log);

		//display
		for (int n = 0; n < dataAll.size(); n++)
		{
			//display items
			cout << dataAll.at(n) << endl;
		}
	}

};