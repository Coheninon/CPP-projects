// ex30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num, i, j;
	cout << "Enter a number:" << endl;
	cin >> num;

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

