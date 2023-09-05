// ex2.cpp


#include <iostream>
using namespace std;
int main()
{
	int firstNum;
	int secondNum;
	
	cout << "Please enter the first number:" << endl;
	cin >> firstNum;
	cout << "Please enter the second number:" << endl;
	cin >> secondNum;

	cout << "The sum is:" << firstNum + secondNum << endl;
	cout << "The difference is:" << firstNum - secondNum << endl;
	cout << "The product is:" << firstNum * secondNum << endl;
	cout << "The residue is:" << firstNum % secondNum << endl;

}
