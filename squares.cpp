/*
* Anoosh Behbahani & Shaan Saini
* CIS 22A T/TH 3:30-5:20pm
*/



#include <iostream>
using namespace std;

int printSquares(int length)
{
     for (int row = 1; row <= length; row++)
    {
        for (int col = 1; col <= length; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

int main() {
    int length;

    while (length != -1) {
        cout << "I will print squares for you!\n";
        cout << "Please enter the length of one side of the square or -1 to quit: ";
        cin >> length;
        printSquares(length);

    }
    cout << "Thanks for \"square\" dancing with me!" << endl;

    return 0;
}
