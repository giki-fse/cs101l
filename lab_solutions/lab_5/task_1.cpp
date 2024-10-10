#include <iostream>

// Constant pi value
const double pi = 3.142;

// Function to calculate the area of a circle
double calculateAreaOfCircle(double radius)
{
    return pi * radius * radius;
}

int main()
{
    double radius;

    // Ask the user to enter the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the area
    double area = calculateAreaOfCircle(radius);

    // Display the result
    std::cout << "The area of the circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}
