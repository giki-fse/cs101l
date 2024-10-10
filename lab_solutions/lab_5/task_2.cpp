#include <iostream>
using namespace std;

enum TemperatureScale
{
    Celsius,
    Fahrenheit,
    Kelvin
};

// Function to convert temperature between different scales
double convertTemperature(double temperature, TemperatureScale inputScale, TemperatureScale outputScale)
{
    // Return the original value if input and output scales are the same
    if (inputScale == outputScale)
    {
        return temperature;
    }
    // Conversion logic based on input and output scales
    switch (inputScale)
    {
    case Celsius:
        if (outputScale == Fahrenheit)
        {
            return (temperature * 9.0 / 5.0) + 32;
        }
        else
        {
            return temperature + 273.15;
        }
        break;
    case Fahrenheit:
        if (outputScale == Celsius)
        {
            return (temperature - 32) * 5.0 / 9.0;
        }
        else
        {
            return ((temperature - 32) * 5.0 / 9.0) + 273.15;
        }
        break;
    case Kelvin:
        if (outputScale == Celsius)
        {
            return temperature - 273.15;
        }
        else
        {
            return ((temperature - 273.15) * 9.0 / 5.0) + 32;
        }
        break;
    }
}

int main()
{
    double temp;
    TemperatureScale inputScale, outputScale;
    bool flag = true;

    do
    {
        cout << "Enter Temperature: ";
        cin >> temp;

        int opt = 0;
        cout << "Enter Input Scale:" << endl;
        cout << "0. Celcius" << endl;
        cout << "1. Fahrenheit" << endl;
        cout << "2. Kelvin" << endl;
        cin >> opt;

        switch (opt)
        {
        case 0:
            inputScale = Celsius;
            break;
        case 1:
            inputScale = Fahrenheit;
            break;
        case 2:
            inputScale = Kelvin;
            break;
        default:
            cout << "Wrong input." << endl;
            continue;
            break;
        }

        cout << "Enter Output Scale:" << endl;
        cout << "0. Celcius" << endl;
        cout << "1. Fahrenheit" << endl;
        cout << "2. Kelvin" << endl;
        cin >> opt;

        switch (opt)
        {
        case 0:
            outputScale = Celsius;
            break;
        case 1:
            outputScale = Fahrenheit;
            break;
        case 2:
            outputScale = Kelvin;
            break;
        default:
            cout << "Wrong input." << endl;
            continue;
            break;
        }

        cout << "Converted Temperature :" << convertTemperature(temp, inputScale, outputScale) << endl;

        char choice = 'n';
        cout << "Enter y to continue and n to exit: ";
        cin >> choice;
        if (choice == 'n')
        {
            flag = false;
        }
    } while (flag);

    return 0;
}
