// Mikaela-Rose Porter
/*
a program that simulates a calculator. Calculator should perform add, subtract, 
multiplication, division, sqrt, modulus, max and min functions.
Algorithm:
1. Include <iostream> and <cmath>
2. Use using namespace std;
3. Define Functions: double add, double sub, double multiply, double divide, double calculateSqrt, int modulus, double max, double min
4. Function: double max(double num, double num2)
5. Define the Main Function:
6. Declare variables: double num, double num2, char choice.
7. Display Menu: Add, Subtract, Multiply, Divide, Square Root, Modulus, Maximum, Minimum, Quit.
8. Prompt user to select an option from the menu.
9. If user selects 'Q' or 'q', exit loop.
10. Prompt user to enter the first number (num).
11. If the selected option is not Square Root, prompt user to enter the second number (num2).
12. Perform Operation Based on User's Choice:
13. If choice is '1': Call add(num, num2) and display the result.
14. If choice is '2': Call sub(num, num2) and display the result.
15. If choice is '3': Call multiply(num, num2) and display the result.
16. If choice is '4': Call divide(num, num2) and display the result.
17. If choice is '5': Call calculateSqrt(num) and display the result.
18. If choice is '6': Call modulus(static_cast<int>(num), static_cast<int>(num2)) and display the result.
19. If choice is '7': Call max(num, num2) and display the result.
20. If choice is '8': Call min(num, num2) and display the result.
21. If choice is invalid: Print "Invalid option, please try again."
22. Print a newline for readability
23. Return 0
*/

#include <iostream>
#include <cmath>
using namespace std;

double add(double num, double num2) {
    return num + num2;
}

double sub(double num, double num2) {
    return num - num2;
}

double multiply(double num, double num2) {
    return num * num2;
}

double divide(double num, double num2) {
    if (num2 != 0) {
        return num / num2;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return NAN; // Return Not-a-Number if division by zero
    }
}

double calculateSqrt(double num) {
    if (num >= 0) {
        return sqrt(num);
    } else {
        cout << "Error: Square root of negative number is not allowed." << endl;
        return NAN; // Return Not-a-Number for negative input
    }
}

int mod(int num, int num2) {
    return num % num2;
}

double max(double num, double num2) {
    if (num > num2) {
        return num; // Return num if it is greater
    } else {
        return num2; // Otherwise, return num2
    }
}

double min(double num, double num2) {
    if (num < num2) {
        return num; // Return num if it is less
    } else {
        return num2; // Otherwise, return num2
    }
}

int main() {
    double num, num2;
    char choice;

    do {
        cout << "Calculator Menu:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Square Root\n";
        cout << "6. Modulus\n";
        cout << "7. Maximum\n";
        cout << "8. Minimum\n";
        cout << "Q. Quit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 'Q' || choice == 'q') {
            break; // Exit the loop
        }

        cout << "Enter first number: ";
        cin >> num;

        if (choice != '5') { // For sqrt, only one number is needed
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case '1':
                cout << "Result: " << add(num, num2) << endl;
                break;
            case '2':
                cout << "Result: " << sub(num, num2) << endl;
                break;
            case '3':
                cout << "Result: " << multiply(num, num2) << endl;
                break;
            case '4':
                cout << "Result: " << divide(num, num2) << endl;
                break;
            case '5':
                cout << "Result: " << calculateSqrt(num) << endl;
                break;
            case '6':
                cout << "Result: " << mod(static_cast<int>(num), static_cast<int>(num2)) << endl;
                break;
            case '7':
                cout << "Result: " << max(num, num2) << endl;
                break;
            case '8':
                cout << "Result: " << min(num, num2) << endl;
                break;
            default:
                cout << "Invalid option, please try again." << endl;
                break;
        }

        cout << endl; // For better readability in output

    } while (true); // Loop until the user chooses to quit

    return 0;
}
