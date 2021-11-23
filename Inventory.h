#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Inv
{
private:
	//variables
	const string inventory = "Inventory.txt";
	const string tempinv = "Temporary_Inventory.txt";
	vector<string> itemsAll;

	//helper functions
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
		saveData(inventory, item);
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
			cout << invItem + " used!";
			delItem(invItem);
			return true;
		}
		else
		{
			cout << invItem + " can't be used here.";
			return false;
		}
	}

	bool useItem(string invItem, string item)
	{
		if (compareStr(invItem, item))
		{
			cout << invItem + " worked!";
			return true;
		}
		else
		{
			cout << invItem + " can't be used here.";
			return false;
		}
	}

};


/*

#include <iostream>

using namespace std;

//Circle Class Definition
class Circle
{
private:
	const double PI = 3.14159;
	double radius = 0;

public:
	//Default constructor
	Circle(){}

	Circle(double r)
	{
		radius = r;
	}

	//Accessors and Mutators
	double getRadius()
	{
		return radius;
	}

	void setRadius(double r)
	{
		radius = r;
	}

	//Member Functions
	double GetCircumference()
	{
		return 2 * radius * PI;
	}

	double getArea()
	{
		return PI * radius * radius;
	}



};//end Circle Class



#include <iostream>
#include "Circle.h"

using namespace std;

class Cylinder :public Circle
{
private:
	double height;//height or length of the cylinder

public:
	//Constructor (invokes Circle constructor)
	Cylinder(double h, double r) :Circle(r)
	{
		height = h;
	}

	//Accessors and Mutators
	double getHeight()
	{
		return height;
	}

	void setHeight(double h)
	{
		height = h;
	}

	//Member Functions
	double getSurfaceArea()
	{
		return (getArea() * 2) + (GetCircumference() * height);
	}

	double getVolume()
	{
		return (getArea() * height);
	}

};



#include <iostream>

using namespace std;

class NinjaTurtle
{
private:
	string name;
	string color;
	string weapon;
	int age;

public:
	//Default Constructor
	NinjaTurtle(){}

	NinjaTurtle(string strName, string strColor, string strWeapon, int nAge)
	{
		name = strName;
		color = strColor;
		weapon = strWeapon;
		age = nAge;
	}

	string getName()
	{
		return name;
	}

	void setName(string strName)
	{
		name = strName;
	}

	string getColor()
	{
		return color;
	}

	void setColor(string strColor)
	{
		color = strColor;
	}

	string getWeapon()
	{
		return weapon;
	}

	void setWeapon(string strWeapon)
	{
		weapon = strWeapon;
	}

	int getAge()
	{
		return age;
	}

	//Sets Ninja Turtle Age if value is teenage years. Returns false if age wasn't set, true if it was
	bool setAge(int nAge)
	{
		//validate age
		if (nAge > 19 || nAge < 13)
		{
			return false;
		}
		else
		{
			age = nAge;
			return true;
		}
	}

	string toString()
	{
		return name + " wears " + color + " and fights with " + weapon;
	}

};

*/