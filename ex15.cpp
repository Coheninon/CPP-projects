// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int input;
	double width;
	double height;
	double radius;
	double edge;

	cout << "Enter:" << endl <<
		"1 for rectangle" << endl <<
		"2 for square" << endl <<
		"3 for circle " << endl <<
		"4 for triangle" << endl;
	cin >> input;
	switch (input)
	{
		case (1):
		{
			cout << "Enter height: " << endl;
			cin >> height;
			cout << "Enter width: " << endl;
			cin >> width;
			cout << "Area: " << width * height << endl;
			break;
		}
		case (2):
		{
			cout << "Enter edge: " << endl;
			cin >> edge;
			cout << "Area: " << pow(edge, 2) << endl;
			break;
		}
		case (3):
		{
			cout << "Enter radius: " << endl;
			cin >> radius;
			cout << "Area: " << 3.1415 * pow(radius, 2) << endl;
			break;
		}
		case (4):
		{
			cout << "Enter height: " << endl;
			cin >> height;
			cout << "Enter width: " << endl;
			cin >> width;
			cout << "Area: " << (width * height) / 2 << endl;
			break;
		}
		default:
		{
			cout << "Error" << endl;
			break;
		}


	}
}

