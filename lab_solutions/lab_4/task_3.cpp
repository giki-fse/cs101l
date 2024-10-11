#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int i = 1;
    while (i <= rows) {
        // Print leading spaces
        int spaces = rows - i;
        while (spaces > 0) {
            cout << "  "; // 2 spaces for better alignment
            spaces--;
        }

        // Print ascending numbers
        int num = 1;
        while (num <= i) {
            cout << num << " ";
            num++;
        }

        // Print descending numbers
        num = i - 1;
        while (num > 0) {
            cout << num << " ";
            num--;
        }

        cout << endl; // Move to the next line for the next row
        i++;
    }

    return 0;
}
