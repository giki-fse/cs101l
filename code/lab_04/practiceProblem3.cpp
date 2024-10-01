#include <iostream>

using namespace std;

int main()

{

    int c, r, n;

    int fibonacci, first = 0, second = 0;

    cout << "Enter a negative odd integer: ";

    cin >> n;

    while ((n >= 0) || (n % 2 == 0))

    {

        cout << "Illegal Entry. Try again: ";

        cin >> n;
    }

    n = -1 * n;

    cout << "Fibonicci Series upto " << n << " Terms " <<

        endl;
    for (int j = 0; j < n; j++)
    {

        if (j <= 1)

            fibonacci = j;

        else

        {

            fibonacci = first + second;
        }

        first = second;

        second = fibonacci;

        cout << fibonacci << ", ";
    }

    return 0;
}