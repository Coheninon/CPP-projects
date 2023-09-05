// ex11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char Char;
	bool Value = false; 
	cout << "Enter char: " << endl;
	cin >> Char;
	Value = ((int(Char) >= 97) && (int(Char) <= 122)) || ((int(Char) >= 65) && (int(Char) <= 90));
	cout << "Is English: " << Value << endl;
}

