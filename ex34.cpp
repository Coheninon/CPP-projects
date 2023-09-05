// ex34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    double sum = 0;
    int pos = 0;
    int neg = 0;

    cout << "Enter numbers until there are three times negative numbers entered more than positive:" << endl;

    while (pos == 0 || neg == 0)
    {
        cin >> num;
        if (num < 0)
        {
            neg += 1;
            sum += num;
        }
        else if (num > 0)
        {
            pos += 1;
            sum += num;
        }
        
    }


    while (pos * 3 != neg)
    {
        cin >> num;

            if (num < 0)
            {
                neg += 1;
                sum += num;
            }
            else if (num > 0)
            {
                pos += 1;
                sum += num;
            }
           
 
    }
    cout << "Average: " << double(sum / (pos + neg)) << endl;
}

