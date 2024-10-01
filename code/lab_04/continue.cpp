#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i <= 5)
    {
        // condition to continue
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}
