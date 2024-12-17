#include <iostream>
using namespace std;

// Function to find the largest and smallest elements
void findLargestSmallest(int* arr, int size, int* largest, int* smallest) {
    // Initialize the largest and smallest elements to the first array element
    *largest = *arr;
    *smallest = *arr;

    // Traverse the array using pointer arithmetic
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > *largest) {
            *largest = *(arr + i); // Update largest
        }
        if (*(arr + i) < *smallest) {
            *smallest = *(arr + i); // Update smallest
        }
    }
}

int main() {
    const int SIZE = 8; // Size of the array
    int arr[SIZE];      // Array to store user input
    int largest, smallest; // Variables to store the results

    // Input array elements
    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    // Call the function to find the largest and smallest elements
    findLargestSmallest(arr, SIZE, &largest, &smallest);

    // Display the results
    cout << "The largest element is: " << largest << endl;
    cout << "The smallest element is: " << smallest << endl;

    return 0;
}
