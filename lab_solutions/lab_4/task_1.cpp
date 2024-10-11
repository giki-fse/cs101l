#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            continue; // Skip numbers divisible by 3
        }
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
