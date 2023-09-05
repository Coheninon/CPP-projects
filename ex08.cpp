// ex8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double diskPrice;
    int diskNum;

    cout << "Please enter disk price:" << endl;
    cin >> diskPrice;

    cout << "Please enter number of disks:" << endl;
    cin >> diskNum;

    cout << "Pay " << floor(diskNum * diskPrice) - int(floor((diskNum * diskPrice))) % 5 << " NIS" << endl;
}


