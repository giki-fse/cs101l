#include <iostream>
using namespace std;

int main() {
    int age[4];
    int same_age[4];
    int i = 0;

    // Initialize the age array
    age[0] = 23;
    age[1] = 34;
    age[2] = 65;
    age[3] = 74;

    // Copy elements from age array to same_age array
    for (; i < 4; i++)
        same_age[i] = age[i];

    // Display the same_age array
    for (i = 0; i < 4; i++)
        cout << same_age[i] << " ";

    cout << endl;
    return 0;
}
