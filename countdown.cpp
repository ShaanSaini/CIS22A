/*
* Shaan Saini
* Chaitanya Angadala
* CIS22A T/Th 3:30 -5:20
*/

#include <iostream>
using namespace std;

int main()
{
    int countdown = 10;

    cout << "NASA Mission Control readying for liftoff." << endl;
    cout << "Initializing countdown from 10..." << endl;
    while (countdown > 0) {
        cout << countdown << endl;
        countdown--;
    }

    cout << "We have liftoff!" << endl;
}
