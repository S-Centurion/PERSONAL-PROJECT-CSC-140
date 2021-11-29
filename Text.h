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