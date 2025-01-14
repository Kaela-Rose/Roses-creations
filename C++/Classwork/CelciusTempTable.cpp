//Mikaela-Rose Porter
/*Purpose: a program that utilizes a function name celsius that accepts a Fahrenheit temperature as an argument. 
The function should return the temperature, converted to Celsius.*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    // Display the table header
    cout << setw(10) << "Fahrenheit" << setw(15) << "Celsius" << endl;
    cout << string(25, '-') << endl;

    // Loop through Fahrenheit temperatures from 0 to 20
    for (int fahrenheit = 0; fahrenheit <= 20; ++fahrenheit) {
        double celsiusTemp = celsius(fahrenheit);
        cout << setw(10) << fahrenheit << setw(15) << fixed << setprecision(2) << celsiusTemp << endl;
    }

    return 0;
}