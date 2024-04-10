/*
-----------------------------------------------------------------------
|                     Catherine Cabrera Garcia                         |
|            A program that asks for a user's input to enter           |
|       a circle radius and it outputs the circumference and area      |
|----------------------------------------------------------------------|
|       Input: Circle Radius | Output: Radius, Circumference, & Area   |
-----------------------------------------------------------------------

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// Function prototypes.
double getDoubleInput(string prompt);
bool checkFailure(double value);
double circumference(double radius);
double area(double radius);

// Main
int main() {

    // Prompt for circle radius input
    string prompt = "Enter the circle radius: ";
    double radius = getDoubleInput(prompt);

    // Calculate circumference and area
    double circum = circumference(radius);
    double areas = area(radius);

    // Output
    cout << fixed << setprecision(2) << endl;
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << circum << endl;
    cout << "Area: " << areas << endl;

    return 0;
}

// Function to get double input
double getDoubleInput(string prompt) {
    double value;
    cout << prompt;
    cin >> value;

    // Check for input failure
    while (cin.fail() || !checkFailure(value)) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input. Please enter a valid radius: ";
        cin >> value;
    }
    return value;
}

// Function to check input validity
bool checkFailure(double value) {
    return value >= 0;  // All positive values are valid radii
}

// Function to calculate circumference
double circumference(double radius) {
    const double pi = 3.14159;
    return 2 * pi * radius;
}

// Function to calculate area
double area(double radius) {
    const double pi = 3.14159;
    return pi * pow(radius, 2);
}
