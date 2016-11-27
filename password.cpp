/*
* Shaan Saini
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    string phrase;

    ifstream fin;
    ofstream fout;

    fin.open("phrases.txt");
    if (fin.fail()) {
        cout << "Input file opening failed.\n";
        exit(-1);
    }

    fout.open("passwords.txt");
    if (fout.fail()) {
        cout << "Outfile file opening failed.\n";
        exit(-1);
    }

    fout << "The passwords are:\n";

    while (getline(fin, phrase)) {
        for (int i = 0; i <= phrase.length(); i++) {
            if (phrase[i] == ' ') {

                fout << "";

            } else if (phrase[i] == 'a' || phrase[i] == 'A') { //convert to @ symbol

                fout << "@";

            } else if (phrase[i] == 'e' || phrase[i] == 'E') {

                fout << "3";

            } else if (phrase[i] == 'o' || phrase[i] == 'O') {

                fout << "0";

            } else if (phrase[i] == 'i' || phrase[i] == 'I') {

                fout << "!";

            } else if (phrase[i] == 'u' || phrase[i] == 'U') {

                fout << "^";

            } else { //all other letters leave alone

                fout << phrase[i];

            }
        }
        fout << endl;
    }

    fin.close();
    fout.close();
}
