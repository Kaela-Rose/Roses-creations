// Mikaela-Rose Porter
/*
Algorithm
Step 1: Start Program
- Display a welcome message.
- Inform the user that the program will solve quadratic equations of the form:
    AX^2 + BX + C = 0

Step 2: Set Up Program Structure
- Include libraries for input/output, math, and complex numbers.
- Define variables:
    A → coefficient of X^2 (user input)
    B → coefficient of X (user input)
    C → constant term (user input)
    D → discriminant, calculated as (B^2 - 4AC)
    X1, X2 → solutions (roots of the equation)
- Define a function solveQuadratic(a, b, c):
    INPUT: a, b, c
    PROCESS:
        Compute discriminant D = b^2 - 4ac
        If D > 0: two distinct real roots
        If D == 0: both roots are the same
        If D < 0: roots are complex
        Print the results
    OUTPUT: roots (X1 and X2)

Step 3: Loop for Multiple Runs
- Use a for loop to repeat 5 times.
Pseudocode:
    for i from 0 to 4:
        ask user for A, B, C
        call solveQuadratic(A, B, C)
        print the results

Step 4: End Program
- Display a closing message.
*/

#include <iostream>
#include <cmath>
#include <complex> // allows handling of complex roots
using namespace std;

// Function to solve quadratic equations
void solveQuadratic(double a, double b, double c) {
    double discriminant = (b * b) - (4 * a * c);
    complex<double> root1, root2;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Result: Two distinct real roots" << endl;
    }
    else if (discriminant == 0) {
        // Both roots are the same
        root1 = root2 = -b / (2 * a);
        cout << "Result: Both roots are the same" << endl;
    }
    else {
        // Complex roots
        root1 = complex<double>(-b, sqrt(-discriminant)) / (2.0 * a);
        root2 = complex<double>(-b, -sqrt(-discriminant)) / (2.0 * a);
        cout << "Result: The roots are complex" << endl;
    }

    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;
}

int main() {
    cout << "Welcome! This program solves quadratic equations of the form AX^2 + BX + C = 0" << endl;
    cout << "You will enter coefficients A, B, and C.\n" << endl;

    // Run program 5 times
    for (int i = 0; i < 5; i++) {
        cout << "\nRun " << (i + 1) << " of 5:" << endl;

        double A, B, C;
        cout << "Enter coefficient A: ";
        cin >> A;
        cout << "Enter coefficient B: ";
        cin >> B;
        cout << "Enter constant C: ";
        cin >> C;

        // Solve quadratic equation
        solveQuadratic(A, B, C);
    }

    cout << "\nProgram finished. Thank you!" << endl;
    return 0;
}