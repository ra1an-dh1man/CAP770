#include <iostream>
using namespace std;

// Function to insert an element into an array at a specified position
void insertElement(int arr[], int& size, int capacity, int element, int position) {
    // Check if the array is full
    if (size >= capacity) {
        cout << "Array is full. Cannot insert element.\n";
        return;
    }

    // Check if the position is valid
    if (position < 0 || position > size) {
        cout << "Invalid position. Cannot insert element.\n";
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element at the specified position
    arr[position] = element;

    // Increase the size of the array
    size++;
}

int main() {
    const int capacity = 10; // Maximum capacity of the array
    int arr[capacity] = {1, 2, 3, 4, 5}; // Initialized array
    int size = 5; // Current size of the array

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element = 10; // Element to be inserted
    int position = 2; // Position at which the element is to be inserted

    insertElement(arr, size, capacity, element, position);

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
