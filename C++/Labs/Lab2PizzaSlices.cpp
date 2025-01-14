/* Mikaela-Rose Porter and Laila Campbell
A program to calculate the number of slices a pizza of any size can be divided into.
Algorithm:
Include iostream and namespace std
include cmath
Define main()
Define and set variable PI to 3.14159.
Define and set variable sliceArea to 14.125.
Define variables area, numSlices, and radius as doubles
Ask the user for the diameter for the pizza in inches. Store that input in the variable diameter.
Calculate the radius using the newly inputted diameter.
Calculate the area of the pizza using pow for squaring the radius
Using the area and sliceArea calculate the number of slices and store in numSlices variable.
Output a message to the user saying the number of slices. Use output formatting for fixed-point notation and 1 decimal place precision 
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main()
{
    double PI, sliceArea;
    PI = 3.14159;
    sliceArea = 14.125;
    double Area, numSlices, Diameter, Radius;
    cout << setprecision(2) << fixed;
    cout << "Enter the diamteter for the pizza in inches: ";
    cin >> Diameter;
    cout << endl;

    Radius = Diameter / 2;
    Area = PI * pow(Radius, 2);
    numSlices = Area / sliceArea;
    cout << "The number of slices on this pizza is " << numSlices << endl;
}