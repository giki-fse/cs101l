
#include <iostream>
using namespace std;
int main()
{

    int flag = 1;
    int kebabPrice = 500;
    int ricePrice = 200;
    int drinkPrice = 50;
    int a4 = 1200;
    int quantity = 1;
    int op = 0;
    int amount = 0;

    do
    {
        cout << "*******Shanley Hotel Menu******\n";
        cout << "1. Kabab ------- 500 WITH 3 PIECES\n";
        cout << "2.Rice with BBq ---- 200 PER PLATTER\n";
        cout << "3.Drinks --- 50 each\n";
        cout << "4. mutton Karahi ---- 1200\n";
        cout << "Select your food item: ";
        cin >> op;
        if (op == 1)
        {
            cout << "How many servings: ";
            cin >> quantity;
            amount = amount + kebabPrice * quantity;
        }
        else if (op == 2)
        {
            cout << "How many servings: ";
            cin >> quantity;
            amount = amount + ricePrice * quantity;
        }
        else if (op == 3)
        {
            cout << "How many servings: ";
            cin >> quantity;
            amount = amount + drinkPrice * quantity;
        }
        else if (op == 4)
        {
            cout << "How many servings: ";
            cin >> quantity;
            amount = amount + a4 * quantity;
        }
        else
        {
            cout << "Try again!! Wrong input: ";
        }

        cout << "Enter 1 to add more items and 0 to exit: ";
        cin >> flag;
    } while (flag != 0);

    cout << "Your total bill is: "<< amount;
}