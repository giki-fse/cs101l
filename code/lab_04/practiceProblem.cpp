// #include <iostream>
// #include <cstdlib>

// using namespace std;

// int main() {
//     int inputNumber, sum = 0, individualNumber;

//     cout << "Enter a number: ";
//     cin >> inputNumber;

//     inputNumber = abs(inputNumber); // Handle negative numbers

//     do {
//         individualNumber = inputNumber % 10; // Extract the last digit of the number
//         sum += individualNumber; // Add the last digit to the sum
//         inputNumber = inputNumber / 10; // Remove the last digit
//     } while (inputNumber > 0);

//     cout << "The sum of the individual numbers is: " << sum << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

int main()

{

    int inputNumber, sum, individualNumber;

    cin >> inputNumber;

    inputNumber = abs(inputNumber); // Handle negative numbers
    sum = 0;

    do
    {

        individualNumber = inputNumber % 10; // Extract the last digit of the number
        sum += individualNumber;

        inputNumber = inputNumber / 10; // Remove the last digit
        cout << individualNumber;
    } while (inputNumber > 0);

    cout << "The sum of the individual numbers is: " << sum << endl;

    return 0;
}