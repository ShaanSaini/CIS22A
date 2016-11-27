/*
* Shaan Saini
* Anoosh Behbahani
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
using namespace std;

/**
    inserts a new item into a list, creating a new array in the process
    @param array the original list stored as an array
    @param size the size of the original list before the new value is added
    @param capacity the total capacity of the array
    @param value the value to be added to the list
    @param index the index at which to add the new value to the list
    @return the number of items in the array with the new value added

*/

void insert(int array[], int size, int capacity, int value, int index);

int main() {
    const int CAPACITY = 10;
    int size = 5;
    int nums[CAPACITY] = {2,9,6,5,3};
    int valueToAdd = 100;
    int index = 2;
    insert(nums, size, CAPACITY, valueToAdd, index);
    size++;

    //Prints out the array to make sure the new value was added to the array
    for (int i = 0; i < size; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}

//You fill in the rest of the code for the function
void insert(int array[], int size, int capacity, int value, int index) {
    if (size == capacity) {
        cout << "Array is full. No items can be inserted." << endl;
        return; //function will end here
    }
    for(int i = size; i > index; i--) {
        array[i] = array[i - 1];
    }
    array[index] = value;
    return;
}
