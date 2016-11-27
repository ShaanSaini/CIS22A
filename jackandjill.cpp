/*
* Shaan Saini
* CIS 22A T/Th 3:30 - 5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 150; i++) {

        if (i % 35 == 0) {
            cout << "Went Up the Hill\n";
        } else if (i % 5 == 0) {
            cout << "Jack\n";
        } else if (i % 7 == 0) {
            cout << "Jill\n";
        } else {
            cout << i << endl;
        }
    }
}
