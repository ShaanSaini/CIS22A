/*
* Shaan Saini
* CIS 22A T/Th 3:30pm - 5:20pm
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "i\tj\n";

    for (double i = -5; i <= 5; i += 0.5) {

        double j = pow(i, 3);
        cout << fixed << setprecision(1);

        cout << i << "\t" << j << endl;

    }
}
