#pragma once

#include<iostream>

using namespace std;

namespace MyLib
{
	int GenerateRandomNumber(int From, int To)
	{
		int RandNum = rand() % (To - From + 1) + From;
		return RandNum;
	}

	void ResetScreen() {
		system("cls");
		system("color 0F");
	}

	int ReadPositiveNumber(string Message)
	{
		int PositiveNum = 0;
		do
		{
			cout << Message << endl;
			cin >> PositiveNum;
		} while (PositiveNum < 1);
		return PositiveNum;
	}

}