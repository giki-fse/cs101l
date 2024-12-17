#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int* num1, int* num2) {
    int temp = *num1; // Store the value pointed to by num1 in a temporary variable
    *num1 = *num2;    // Assign the value pointed to by num2 to num1
    *num2 = temp;     // Assign the value stored in temp to num2
}

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Display numbers before swapping
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Call the function to swap the numbers
    swapNumbers(&a, &b);

    // Display numbers after swapping
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
