// ex25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num, i;
    int sum = 0;
    cout << "Enter a number to calculate the sum:" << endl;
    cin >> num;
    for (i = 0; i <= num; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}
