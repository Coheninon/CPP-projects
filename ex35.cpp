	// ex35.cpp : This file contains the 'main' function. Program execution begins and ends there.
	//

	#include <iostream>
	using namespace std;

	int main()
	{	
		char choice = '0', power = 0;
		long reverse = 0, num, firstNum, secondNum, newNum, help;

		while (choice != '3')
		{
			cout << "Menu:" << endl
				<< "1. to reverse order of digits" << endl
				<< "2. to append number to another" << endl
				<< "3. Exit" << endl
				<< "Enter your choice:" << endl;

			cin >> choice;

			switch (choice)
			{
				case ('1'):
				{
					cout << "Enter number:" << endl;
					cin >> num;
					while (num != 0)
					{
						reverse = reverse + num % 10;
						reverse = reverse * 10;
						num = num / 10;
					}
					cout << "Reversed: " << reverse / 10 << endl << endl;
					break;
				}
				case ('2'):
				{
					cout << "Enter two numbers:" << endl;
					cin >> firstNum >> secondNum;
					help = secondNum;
					while (help != 0)
					{
						power += 1;
						help /= 10;
					}
					cout << "Appended: " << firstNum * pow(10, power) + secondNum << endl << endl;
					break;
				
				}
				case ('3'):
				{

					break;
				}
				default:
				{
					cout << "Wrong choice." << endl << endl;
					break;
				}
			}
		
		}
	}

