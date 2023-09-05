// exSafe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int key;
    int subKey;
    int code = 2;
    int num;
    cout << "Enter key" << endl;
    cin >> key;
    while (key != 0)
    {
        subKey = key % 100;
        for (num = 2; num < subKey; num++)
        {
            if (subKey % num == 0)
            {
                if (num == 2)
                {
                    cout << "2";
                }
                else if (num % code != 0)
                {
                    code = num;
                    cout << code;
                }
                
            }
        }
        key = key / 100;
    }
}


