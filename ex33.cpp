// ex33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num, i, help, sum = 0;
    while (true)
    {
        cout << "Enter a number greater than 100:" << endl;
        cin >> num;
        while (num <= 100)
        {
            cout << "Error! Input must be greater than 100" << endl;
            break;
        }
        if (num > 100)
        { 
            {
                while (num != 0)
                {
                    help = num % 10;
                    sum += help;
                    num = num / 10;
                }
                cout << "Sum of digits: " << sum << endl;
                break;
            }
        }
    }
}

