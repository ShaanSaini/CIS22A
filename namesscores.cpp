/*
* Shaan Saini
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
#include <fstream>
using namespace std;

/**
PROTOTYPE FUNCTIONS BELOW
*/

//Linear Search for names
int linearSearch(string array[], int sizeArray, string name);

//Remove function for names
void remove(string array[], int sizeArray, int indexToRemove);

//Remove functon for scores; Changed name because this is an int array not string array
void remove2(int array[], int sizeArray, int indexToRemove);

int main()
{
    const int SIZE = 5;
    int scores[SIZE];
    string names[SIZE];
    ifstream fin;
    ofstream fout;

    fin.open("names.txt");
    for (int i = 0; i < SIZE; i++) {
        getline(fin, names[i]);
    }

    fin.close();
    fin.open("scores.txt");
    for (int i = 0; i < SIZE; i++) {
        fin >> scores[i];
    }

    fin.close();

    fout.open("list1.txt");
    fout << "#" << "\t" << "Name" << "\t\t\t\t" << "Score" << endl;
    for (int i = 0; i < SIZE; i++) {
        fout << i + 1 << "\t" << names[i] << "\t\t\t" << scores[i] << endl;
    }

    fout.close();

    int name;
    int index = linearSearch(names, SIZE, "Alberto Gomez");
    cout << "The index of Alberto Gomez's Name: " << index << endl; //Should print 2 to the console

    //Now removing Alberto from the entry and rewriting the result to a different file

    remove(names, SIZE, index);
    remove2(scores, SIZE, index);
    //The index above is Alberto's name as defined from the linearSearch function call

    fout.open("list2.txt");
    fout << "#" << "\t" << "Name" << "\t\t\t\t" << "Score" << endl;
    //I wrote SIZE - 1 because it kept printing a repeat of the last name and score, and the SIZE variable is a constant.
    //I tried changing the SIZE variable to a regular int without const but it wouldn't let me for some reason.
    for (int i = 0; i < SIZE - 1; i++) {
        fout << i + 1 << "\t" << names[i] << "\t\t\t" << scores[i] << endl;
    }

    fout.close();

}

int linearSearch(string array[], int sizeArray, string name) {
    for (int i = 0; i < sizeArray; i++) {
        if (array[i] == name) {
            return i;
        }
    }
    return -1;
}


void remove(string array[], int sizeArray, int indexToRemove) {
    for (int i = indexToRemove; i < sizeArray - 1; i++) {
        array[i] = array[i+1];
    }
    return;
}

void remove2(int array[], int sizeArray, int indexToRemove) {
    for (int i = indexToRemove; i < sizeArray - 1; i++) {
        array[i] = array[i+1];
    }
    return;
}
