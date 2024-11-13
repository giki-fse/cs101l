#include <iostream>
using namespace std;

int main() {
    int age[4]; // array ‘age’ of 4 ints

    // Get 4 ages from the user
    for (int j = 0; j < 4; j++) {
        cout << "Enter an age: ";
        cin >> age[j]; // access array element
    }

    // Display the 4 ages
    for (int j = 0; j < 4; j++) {
        cout << "You entered " << age[j] << endl;
    }

    return 0;
}
