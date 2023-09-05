// ex27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
	int num, i;
	int check = 0;
	cout << "Enter any number:" << endl;
	cin >> num;
	if (num == 2)
	{
		cout << "2 is a prime number" << endl;
	}
	else
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				cout << num << " is not a prime number" << endl;
				check = 1;
				break;
			}
			
		}
		if (check == 0)
		{
			cout << num << " is a prime number" << endl;
		}
	}
	
}


