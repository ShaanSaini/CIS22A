/*
* Shaan Saini
* Anoosh Behbahani
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
using namespace std;
/**
    Searches an array for a particular value
    @param array the array to search
    @param sizeArray the size of the array to search
    @param value the value to search for
    @return the index of the item in the array if it exists in the array or -1 if it doesn't

*/
int linearSearch(int array[], int sizeArray, int value);

int main() {
    const int SIZE = 5;
    int nums[] = {2,9,6,5,3};

    int value = 5; //the value to search for
    int indexOfValue; //the index of the value
    indexOfValue = linearSearch(nums, SIZE, value);

    if (indexOfValue != -1) {
        cout << "The index of " << value << " is: " << indexOfValue << endl;
    } else {
        cout << value << " is not in the array." << endl;
    }

    int newValue = 14;
    indexOfValue = linearSearch(nums, SIZE, newValue);

    if (indexOfValue != -1) {
        cout << "The index of " << newValue << " is: " << indexOfValue << endl;
    } else {
        cout << newValue << " is not in the array." << endl;
    }

    return 0;
}

//Stub for the linearSearch function below
//You write the full function
int linearSearch(int array[], int sizeArray, int value) {
    for (int i = 0; i < sizeArray; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}
