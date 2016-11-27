/*
* Shaan Saini
* Tarunpal Kapoor
* CIS 22A T/Th 3:30pm - 5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "I will help you fall asleep!" << endl;
    int targetSheep;

    cout << "Enter the number of sheep you wish to count: ";
    cin >> targetSheep;

    for (int i = 1; i <= targetSheep; i++) {
        cout << i << " sheep" << endl;
    }

    cout << "\nYou counted " << targetSheep << " sheep.\n";
    cout << "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ\n";
}
