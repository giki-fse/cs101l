#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    const string correctPassword = "mySecret123"; // The correct password

    do {
        cout << "Enter the password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Please try again." << endl;
        }

    } while (password != correctPassword);

    cout << "Access granted!" << endl;

    return 0;
}
