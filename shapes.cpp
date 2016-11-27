/*
* Anoosh Behbahani & Shaan Saini
* CIS 22A T/TH 3:30-5:20pm
*/



#include <iostream>
using namespace std;

void printSquares(int length)
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

void printTriangles(int length)
{
    for (int row = 1; row <= length; row++) {

        for (int col = 1; col <= row; col++) {

            cout << "*";

            }

        cout << endl;

        }
}

void printRectangles(int length, int width)
{
    for (int row = 1; row <= width; row++)
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
    int width;
    int base;
    string shape;
    string repeat = "y";

    while (repeat == "y") {
        cout << "I will print squares for you!\nRectangles and triangles, too!\n\n";
        cout << "Enter the shape that you would like to print (rectangle, triangle or square): ";
        cin >> shape;

        if (shape == "rectangle") {
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;

            printRectangles(length, width);
        } else if (shape == "triangle") {
            cout << "Enter the length of the triangle's base: ";
            cin >> length;

            printTriangles(length);
        } else if (shape == "square") {
            cout << "Enter the length of the side of the square: ";
            cin >> length;

            printSquares(length);
        }

        if (shape != "rectangle" && shape != "square" && shape != "triangle") {
            cout << "You entered an invalid shape!\n\n";
        }

        cout << "Would you like me to print more shapes for you? (y/n) ";
        cin >> repeat;
        cout << endl;
    }

    cout << "Thanks for \"square\" dancing with me!" << endl;

}
