/*
* Shaan Saini
* Amoosh Behbahani
* CIS 22A 3:20-5:30pm
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main ()
{
    int sheep, pigs, cows, goats, ducks;
    ifstream fin;
    ofstream fout;

    fin.open("animalsIn.txt");
    if (fin.fail()) {
        cout << "Input file failed.\n";
        exit(-1);
    }

    fout.open("animalsOut.txt");
    if (fout.fail()) {
        cout << "Output failed.\n";
        exit(-1);
    }

    fin >> sheep >> pigs >> cows >> goats >> ducks;
    fout << "In our barnyard, there are:\n" << sheep << " sheep\n" << pigs << " pigs\n" << cows << " cows\n" << goats << " goats\n" << ducks << " ducks\n";

    fin.close();
    fout.close();
}
