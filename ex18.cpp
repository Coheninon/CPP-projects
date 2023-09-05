// ex18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double MaxSpeed;
	double FinalSpeed;
	double Defences;
	int Obstacle;
	cout << "To start the obstacle race test please enter Maximum car speed (Meters per Minute):" << endl;
	cin >> MaxSpeed;
	cout << "Number of car defences(1 - 5) :" << endl;
	cin >> Defences;
	if ((Defences > 5) || (Defences < 1))
	{
		cout << "A car can not finish the race with 0 defences and can not have more than 5" << endl;
	}
	else
	{
		cout << "To start the test pick an obstacle the car will face : " << endl
			<< "1 - Oil Pod" << endl
			<< "2 - Metal Ball" << endl
			<< "3 - Ignite Turbo" << endl
			<< "4 - Land Rocket" << endl;
		cin >> Obstacle;

		switch (Obstacle)
		{
			case(1):
			{
				FinalSpeed = MaxSpeed / 2;
				Defences -= 1;
				break;
			}

			case(2):
			{
				FinalSpeed = MaxSpeed / 3;
				Defences -= 3;
				break;
			}
			case(3):
			{
				FinalSpeed = pow(MaxSpeed, 2);
				break;
			}
			case(4):
			{
				FinalSpeed = 0;
				Defences = 0;
				break;
			}
			default:
			{
				cout << "Code picked was incorrect" << endl;
				break;
			}

		}
		
		if ((MaxSpeed / 25000 + FinalSpeed / 25000 <= 20) && (Defences > 0))
		{
			cout << "The driver has finished the track successfully!" << endl;
		}
		else
		{
			cout << "The driver has finished the track unsuccessfully..." << endl;
		}

	}
}