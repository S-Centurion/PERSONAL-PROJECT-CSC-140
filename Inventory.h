#include <iostream>

using namespace std;

class Inv
{
private:
	//variables

public:
	//constructors
	Inv() {}

	//mutators and accessors





	//member functions





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