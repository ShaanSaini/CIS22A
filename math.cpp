/*
* Shaan Saini
* CIS 22A T/Th 3:30pm - 5:20pm
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    double num;
    cin >> num;
    double numSquare = pow(num, 2);
    double numCube = pow(num, 3);
    double numQuart = pow(num, 4);
    double numRoot = sqrt(num);

    cout << "The square of " << num << " is: " << numSquare << endl;
    cout << "The cube of " << num << " is: " << numCube << endl;
    cout << "The quartic (fourth power) of " << num << " is: " << numQuart << endl;
    cout << "The square root of " << num << " is: " << numRoot << endl;
}
